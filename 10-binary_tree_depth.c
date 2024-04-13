#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 * Return: If tree is NULL, must return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth;
	size_t right_depth;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);
}
