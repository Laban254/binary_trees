#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a tree has complete nodes
 *
 * @tree: pointer to the root tree
 *
 * Return: 0 if not full and 1 if full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL	 && tree->right == NULL)
		return (1);
	return (binary_tree_is_full(tree->left) & binary_tree_is_full(tree->right));
}

/**
 * max - finds maximum height between two paths in a tree.
 * @left: length of left path
 * @right: length of right path
 *
 * Return: max between the two paths
 */
size_t max(size_t left, size_t right)
{
	if (left < right)
		return (right);
	return (left);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node of tree to measure height
 *
 * Return: height of tree else 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);


	return (max(left, right) + 1);
}
/**
 * binary_tree_balance - Calculate the balance factor of a tree
 * @tree: The binary tree
 * Return: The bf
 */
size_t binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: The binary tree
 * Return: 1 if perfect else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!binary_tree_balance(tree) && binary_tree_is_full(tree))
		return (1)
	return (0);
} k
