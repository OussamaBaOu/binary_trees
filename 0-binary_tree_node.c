#include "binary_trees.h"
/**
 * binary_tree_node - create a node
 * @parent: pointer to parent
 * Return: pointer to the new node
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
