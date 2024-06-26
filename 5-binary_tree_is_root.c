#include "binary_trees.h"
/**
 *binary_tree_is_root - Check if a given node is a root
 *@node: node to the node to check
 *Return: Return 1 if is a root and 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);
return (node->parent == NULL);
}
