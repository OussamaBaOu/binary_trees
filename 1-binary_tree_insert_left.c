#include "binary_trees.h"

/**
 * binary_tree_insert_left - create a node
 * @parent: pointer
 * @value: value
 * Return: pointer
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *a;

if (parent == NULL)
return (NULL);

a = calloc(1, sizeof(binary_tree_t));
if (a == NULL)
return (NULL);
if (parent->left == NULL)
{
parent->left = a;
a->parent = parent;
a->n = value;
a->right = NULL;
a->left = NULL;
}
else
{
a->left = parent->left;
parent->left->parent = a;
parent->left = a;
a->n = value;
a->parent = parent;
a->right = NULL;
}
return (a);
}
