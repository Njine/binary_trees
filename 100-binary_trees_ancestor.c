#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *parent_first, *parent_second;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	parent_first = first->parent, parent_second = second->parent;

	if (first == parent_second || !parent_first || (!parent_first->parent && parent_second))
		return (binary_trees_ancestor(first, parent_second));
	else if (parent_first == second || !parent_second || (!parent_second->parent && parent_first))
		return (binary_trees_ancestor(parent_first, second));

	return (binary_trees_ancestor(parent_first, parent_second));
}
