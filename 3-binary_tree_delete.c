#include "binary_trees.h"

/**
 * binary_tree_delete - Delete an entire binary tree.
 * @tree: Pointer to the root node of the tree to delete.
 *
 * Description: This function recursively deletes all nodes in the binary tree,
 * starting from the leaves and moving towards the root.
 * If tree is NULL, it does nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* Check if the tree is NULL */
	if (tree == NULL)
	{
		return; /* Do nothing if the tree is empty */
	}

	/* Recursively delete the left and right subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* Free the current node */
	free(tree);
}
