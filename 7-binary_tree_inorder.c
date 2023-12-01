#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse a binary tree using in-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node's value.
 *        If tree or func is NULL, do nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Check for NULL tree or function pointer */
	if (tree == NULL || func == NULL)
		return;

    /* Traverse left subtree */
	binary_tree_inorder(tree->left, func);

    /* Call the function for the current node's value */
	func(tree->n);

    /* Traverse right subtree */
	binary_tree_inorder(tree->right, func);
}
