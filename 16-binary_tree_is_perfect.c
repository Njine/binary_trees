#include "binary_trees.h"

/**
 * tree_is_perfect - Check if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is perfect, return the level of height. Otherwise, return 0.
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int right_height = 0;
	int left_height = 0;

	if (tree->right && tree->left)
	{
		right_height = 1 + tree_is_perfect(tree->right);
		left_height = 1 + tree_is_perfect(tree->left);

		if (left_height == right_height && left_height != 0 && right_height != 0)
			return (right_height);

		return (0);
	}
	else if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		result = tree_is_perfect(tree);

		if (result != 0)
		{
			return (1);
		}
		return (0);
	}
}
