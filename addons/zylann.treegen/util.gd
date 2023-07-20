@tool

# Goes up all parents until a node of the given class is found
static func get_tree_root(node: Node) -> Node:
	while node != null:
		node = node.get_parent()
		if node != null and node is TreeGenTree:
			return node
	return null

