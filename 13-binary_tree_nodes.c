#include "binary_trees.h"
/**
 *binary_tree_nodes - counts the nodes
 *@tree: a pointer to the root node
 *
 *Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}
