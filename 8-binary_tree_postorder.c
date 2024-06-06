#include "binary_trees.h"
/**
 *
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
