#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a binary tree using post-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node's value.
 *        If tree or func is NULL, do nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Check for NULL tree or function pointer */
	if (tree == NULL || func == NULL)
		return;

    /* Traverse left subtree */
	binary_tree_postorder(tree->left, func);

    /* Traverse right subtree */
	binary_tree_postorder(tree->right, func);

    /* Call the function for the current node's value */
	func(tree->n);
}
