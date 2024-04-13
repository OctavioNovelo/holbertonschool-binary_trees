#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * Return: If tree is NULL, must return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;
    int left_height = height(tree->left);
    int right_height = height(tree->right);
    return left_height - right_height;
}

/**
 * height - Function that measures the height of a binary tree
 * @tree: Pointer to the root node of a tree
 */

int height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;
    int left_height = height(tree->left);
    int right_height = height(tree->right);
    return 1 + (left_height > right_height ? left_height : right_height);
}
