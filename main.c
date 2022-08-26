#include "binary_trees.h"

/**
 * main - entry point
 *
 * Return: 0 - success, 1 - failure
 */
int main(void)
{
  binary_tree_t *parent = binary_tree_node(NULL, 10);

  binary_tree_insert_left(parent, 9);
  binary_tree_insert_left(parent, 8);

  binary_tree_insert_right(parent, 7);
  binary_tree_insert_right(parent, 6);

  binary_tree_insert_left(parent, 5);

  binary_tree_insert_right(parent->left, 4);
  binary_tree_insert_left(parent->right, 3);
  binary_tree_insert_left(parent->right, 2);

  binary_tree_insert_right(parent->right->left, 2);
  binary_tree_insert_right(parent->right, 1);
  binary_tree_insert_right(parent->right, 0);


  binary_tree_print(parent);

  return (0);
}
