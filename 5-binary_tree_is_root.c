#include "binary_trees.h"

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (1);
	return (0);
}
