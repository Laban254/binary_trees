#include "binary_trees.h"
/**
* binary_tree_depth - finds depth of a node
* @tree: the node to check
* Return: depth of the node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
