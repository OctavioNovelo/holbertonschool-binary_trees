#include "binary-trees.h"
/**
 *binary_tree_height - return the height of the binary tree
 *@tree: a pointer to the root node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
size_t left_height = binary_tree_height(tree->left);
size_t right_height = binary_tree_height(tree->right);
if (left_height > right_height)
return (left_height + 1);
else
return (right_height + 1);
}