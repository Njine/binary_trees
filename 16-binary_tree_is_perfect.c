#include "binary_trees.h"

/**
 * tree_is_perfect - Function checks if tree is perfect or not.
 * Each node has 2 or no nodes, same quantity of levels in left as right.
 * @tree: Tree to check.
 * Return: 0 if not perfect or other number - the level of height.
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int rht = 0;
	int lft = 0;

	if (tree->right && tree->left)
	{
		rht = 1 + tree_is_perfect(tree->right);
		lft = 1 + tree_is_perfect(tree->left);
		if (lft == rht && lft != 0 && rht != 0)
			return (rht);
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
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or is Not Perfect Return 0.
 *         Otherwise, return the level of height.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return (tree_is_perfect(tree));
	}
}
