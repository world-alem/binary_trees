#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
  if (tree == NULL)
    return (0);

  return (binary_tree_leaves(tree->left) - binary_tree_leaves(tree->right));
}
