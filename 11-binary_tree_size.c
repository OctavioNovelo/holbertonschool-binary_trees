#include "binary-trees.h"
/**
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
  int count;
  if (tree == NULL)
    return (0);
  
  if (tree != NULL)
    {
      count++;
      tree->left;
      tree->rigth;
    }
  return (count);
}
