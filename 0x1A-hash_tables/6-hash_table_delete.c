#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *node, *tmp;
    unsigned long int i;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            node = ht->array[i];
            while (node != NULL)
            {
                free(node->value);
                free(node->key);
                tmp = node;
                node = node->next;
                free(tmp);
            }
        }
    }
    free(ht->array);
    free(ht);
}
