#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_postorder - Perform post-order traversal on a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Description: This function traverses the binary tree in post-order and
 * applies the given function to each visited node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	const binary_tree_t *current = tree;
	binary_tree_t *stack1[1024]; /* Stack to store nodes */
	binary_tree_t *stack2[1024]; /* Stack for reverse post-order */
	size_t stack1_index = 0, stack2_index = 0;

	stack1[stack1_index++] = current;

	while (stack1_index > 0)
	{
		current = stack1[--stack1_index];
		stack2[stack2_index++] = current;

		if (current->left)
			stack1[stack1_index++] = current->left; /* Push left child onto stack1 */
		if (current->right)
			stack1[stack1_index++] = current->right; /* Push right child onto stack1 */
	}

	while (stack2_index > 0)
	{
		func(stack2[--stack2_index]->n); /* Process nodes in reverse post-order */
	}
}
