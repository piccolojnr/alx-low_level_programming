#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *temp;
    int comma_flag = 0;
    unsigned long int i;

    if (ht == NULL)
        return;

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            if (comma_flag == 1)
                printf(", ");
            temp = ht->array[i];
            while (temp != NULL)
            {
                printf("'%s': '%s'", temp->key, temp->value);
                temp = temp->next;
                if (temp != NULL)
                    printf(", ");
            }
            comma_flag = 1;
        }
    }
    printf("}\n");
}
