from tree_sitter import Node

from CppTranslator.Patches.HelperMethods import get_text
from CppTranslator.Patches.Patch import Patch


class QualifiedIdentifier(Patch):
    """
    Patch   NAMESPACE::ID
    to      NAMESPACE_ID
    """

    def __init__(self, priority: int):
        super().__init__(priority)

    def get_search_pattern(self) -> str:
        return "(qualified_identifier) @qualified_id"

    def get_main_capture_name(self) -> str:
        return "qualified_id"

    def get_patch_inner(self, node: Node, src: bytes) -> bytes:
        if len(node.named_children) > 1:
            identifier = node.named_children[1]
            if len(identifier.named_children) > 1:
                # The namespaces can be nested. E.g. support::endian::read32le
                # (qualified_identifier
                #   (namespace_identifier)
                #   (qualified_identifier (namespace_identifier) (type_identifier))
                # )
                identifier = self.get_patch_inner(identifier, src)
            else:
                identifier = get_text(src, identifier.start_byte, identifier.end_byte)
            namespace = node.named_children[0]
            namespace = get_text(src, namespace.start_byte, namespace.end_byte)
        else:
            # The namespace can be omitted. E.g. std::transform(..., ::tolower)
            namespace = b""
            identifier = node.named_children[0]
            identifier = get_text(src, identifier.start_byte, identifier.end_byte)
        return namespace + b"_" + identifier

    def get_patch(self, captures: [(Node, str)], src: bytes, **kwargs) -> bytes:
        return self.get_patch_inner(captures[0][0], src)
