#include "binary_trees.h"

/**
 * binary_tree_node - create node
 * @parent: pointer
 * @value: value
 * Return: pointer
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *a;

a = malloc(sizeof(binary_tree_t));
if (a == NULL)
return (NULL);
a->n = value;
a->parent = parent;
a->left = NULL;
a->right = NULL;
return (a);
}
