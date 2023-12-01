#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_inorder - Perform in-order traversal on a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Description: This function traverses the binary tree in in-order and
 * applies the given function to each visited node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	const binary_tree_t *current = tree;
	binary_tree_t *stack[1024]; /* Assuming a maximum stack size of 1024 */
	size_t stack_index = 0;

	while (current || stack_index > 0)
	{
		while (current)
		{
			stack[stack_index++] = current; /* Push the current node onto the stack */
			current = current->left; /* Move to the left child */
		}

		if (stack_index > 0)
		{
			current = stack[--stack_index]; /* Pop a node from the stack */
			func(current->n); /* Process the current node */
			current = current->right; /* Move to the right child */
		}
	}
}
