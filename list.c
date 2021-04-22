#include <stdlib.h>
#include <stdio.h>

typedef struct Item Item;
typedef struct List List;

struct Item
{
    int isInitialItem;
    int value;
    Item *next;
};

struct List
{
    Item *first_item;
};

List *list();
Item *item(int value);
Item *last(List *list);
void append(List *list, int value);
void unshift(List *list, int value);
void pop(List *list);
void shift(List *list);
void printf_list(List *list);
int count(List *list);
int get_index(int index, List *list);
int isEmpty(List *list);

int main()
{
    List *numbers = list();
    append(numbers, 15);
    append(numbers, 20);
    append(numbers, 153);
    unshift(numbers, 14);
    printf_list(numbers);
    shift(numbers);
    printf_list(numbers);
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

void unshift(List *list, int value)
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
        Item *new_item = item(value);
        new_item->next = list->first_item;
        list->first_item = new_item;
    }
}

void pop(List *list)
{
    Item *last_item = last(list);

    free(last_item);
}

void shift(List *list)
{
    Item *item_to_delete = list->first_item;
    list->first_item = item_to_delete->next;
    free(item_to_delete);
}

void printf_list(List *list)
{
    Item *current_item = list->first_item;

    if (current_item->isInitialItem == 1)
    {
        printf("[]\n");
    }

    else
    {
        printf("[");
        while (current_item->next != NULL)
        {
            printf("%d, ", current_item->value);
            current_item = current_item->next;
        }
        printf("%i]\n", last(list)->value);
    }
}

int count(List *list)
{
    int length = 0;
    Item *current_item = list->first_item;

    if (current_item->isInitialItem == 1)
    {
        return 0;
    }
    else
    {
        while (current_item != NULL)
        {
            length++;

            current_item = current_item->next;
        }
        return length;
    }
}

int get_index(int index, List *list)
{
    Item *current_item = list->first_item;

    for (int i = 0; i < index; i++)
    {
        current_item = current_item->next;
    }

    return current_item->value;
}

int isEmpty(List *list)
{
    Item *last_item = last(list);

    if (last_item->isInitialItem == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}