#include "binary_trees.h"
/**
 *binary_tree_delete - delete a binary tree 
 *@tree: pointer to root node
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;
binary_tree_delete(tree->left);
binary_tree_delete(tree->rigth);
free(tree);
}