#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node;
char *v_cpy;
unsigned long int index, i;
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
v_cpy = strdup(value);
if (v_cpy == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
for (i = index; ht->array[i]; i++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = v_cpy;
return (1);
}
}
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
free(v_cpy);
return (0);
}
new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (0);
}
new_node->value = v_cpy;
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
