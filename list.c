#include <stdlib.h>
#include <stdio.h>

typedef struct Item
{
    int isInitialItem;
    int value;
    Item *next;
} Item;

typedef struct List
{
    Item *firstItem;
} List;

List *initialize_list();

int main()
{
}

List *initialize_list()
{
    Item *initial_item = malloc(sizeof(Item *));
    List *initialized_list = malloc(sizeof(List *));

    initial_item->isInitialItem = 1;
    initial_item->value = 0;
    initial_item->next = NULL;

    initialized_list->firstItem = initial_item;

    return initialized_list;
}