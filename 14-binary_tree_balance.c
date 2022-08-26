#include "binary_trees.h"


/**
 * binary_tree_leaves - count the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: count of the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);

	return (count);
}

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

  return (int) (binary_tree_leaves(tree->left) - binary_tree_leaves(tree->right));
}
