#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes with at least one child in a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: Number of nodes with at least one child. If @tree is NULL, the function returns 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    /* If tree is NULL, return 0 (empty tree) */
    if (!tree)
        return (0);

    /* Initialize the count of nodes with at least one child */
    size_t node_count = 0;

    /* Check if the current node has at least one child and increment the count accordingly */
    node_count += ((tree->left || tree->right) ? 1 : 0);

    /* Recursively count nodes with at least one child in the left and right subtrees */
    node_count += binary_tree_nodes(tree->left);
    node_count += binary_tree_nodes(tree->right);

    /* Return the total count of nodes with at least one child */
    return (node_count);
}
