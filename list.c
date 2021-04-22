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
    Item *first_item;
} List;

List *list();
Item *item(int value);
Item *last(List *list);
void append(List *list, int value);
void printf_list(List *list);

int main()
{
    List *numbers = list();
    printf_list(list);
}

List *list()
{
    Item *initial_item = malloc(sizeof(Item *));
    List *initialized_list = malloc(sizeof(List *));

    initial_item->isInitialItem = 1;
    initial_item->value = 0;
    initial_item->next = NULL;

    initialized_list->first_item = initial_item;

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

Item *last(List *list)
{
    Item *last_item = list->first_item;

    while (last_item->next != NULL)
    {
        last_item = last_item->next;
    }

    return last_item;
}

void append(List *list, int value)
{
    Item *last_item = last(list);
    Item *new_item = NULL;

    if (last_item->isInitialItem == 1)
    {
        new_item = last_item;
        new_item->value = value;
        new_item->isInitialItem = 0;
    }
    else
    {
        new_item = item(value);
        last_item->next = new_item;
    }
}

void printf_list(List *list)
{
    Item *current_item = list->first_item;

    if (current_item->isInitialItem == 1)
    {
        printf("[]");
    }

    else
    {
        printf("[");
        while (current_item->next != NULL)
        {
            printf("%d, ", current_item->value);
            current_item = current_item->next;
        }
        printf("%i]", last(list)->value);
    }
}