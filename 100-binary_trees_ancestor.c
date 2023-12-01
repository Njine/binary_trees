#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: If no common ancestor was found, return NULL.
 *         Otherwise, return a pointer to the lowest common ancestor node.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    const binary_tree_t *ancestor;

    if (!first || !second)
        return (NULL);

    ancestor = first;

    while (ancestor)
    {
        if (binary_tree_is_descendant(ancestor, second))
            return ((binary_tree_t *)ancestor);

        ancestor = ancestor->parent;
    }

    return (NULL);
}

/**
 * binary_tree_is_descendant - Checks if a node is a descendant of another.
 * @ancestor: The potential ancestor node.
 * @node: The node to check if it is a descendant.
 *
 * Return: If the node is a descendant, return 1. Otherwise, return 0.
 */
int binary_tree_is_descendant(const binary_tree_t *ancestor, const binary_tree_t *node)
{
    while (node)
    {
        if (node == ancestor)
            return (1);

        node = node->parent;
    }

    return (0);
}
