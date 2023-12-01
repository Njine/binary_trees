#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through binary tree via pre-order traversal.
 * @tree: A pointer to root node of tree to traverse.
 * @func: A pointer to function that calls for each node.
 *        If tree or func is NULL, do nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
