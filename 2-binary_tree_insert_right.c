#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer
 * @value: value
 * Return: pointer 
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *a;

if (parent == NULL)
return (NULL);

a = binary_tree_node(parent, value);
if (a == NULL)
return (NULL);
if (parent->right)
{
parent->right->parent = a;
a->right = parent->right;
}
parent->right = a;
return (a);
}
