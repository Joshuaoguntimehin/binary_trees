#include "binary_trees.h"
/**
 * binary_tree_postorder - print elements of tree using post-order traversal
 * @tree: tree to go through
 * @func: function to use
 * Return: Nothing
 */
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
       	if (tree == NULL)
	{
		return;
	}
	else
	{
		// Traverse the left subtree
		binary_tree_postorder(tree->left, func);
	
		// Traverse the right subtree
		binary_tree_postorder(tree->right, func);
		
		// Visit the root node
		func(tree->n);

	}
 


}
