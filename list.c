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

List *list();
Item *item(int value);
Item *last(List *list);

int main()
{
}

List *list()
{
    Item *initial_item = malloc(sizeof(Item *));
    List *initialized_list = malloc(sizeof(List *));

    initial_item->isInitialItem = 1;
    initial_item->value = 0;
    initial_item->next = NULL;

    initialized_list->firstItem = initial_item;

    return initialized_list;
}

Item *item(int value)
{
    Item *new_item = malloc(sizeof(Item *));

    new_item->isInitialItem = 0;
    new_item->value = value;
    new_item->next = NULL;

    return new_item;
}