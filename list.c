/*
this script help to manage a list in C language

Functions
---------
- List *list()                          : initialize a list
- List *item(int value)                 : save item in memory before add it in the list
- Item *last(List *list)                : get last item of the list
- Item *get_item(int index, List *list) : get item with index

- void append(List *list, int value)    : add item at end of the list
- void unshift(List *list, int value)   : add item at begin of the list
- void pop(List *list)                  : remove item at end of the list
- void shift(List *list)                : remove item at begin of the list
- void printf_list(List *list)          : display all items of the list

- int count(List *list)                 : count numbers of items in a list
- int get_index(int index, List *list)  : get value of item with index
- int isEmpty(List *list)               : check if a list is empty (return 1 if it is empty or 0 if it is not empty)
*/

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
Item *get_item(int index, List *list);

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
    // Example
    /*
    List *numbers = list();

    unshift(numbers, 10);
    unshift(numbers, 9);
    unshift(numbers, 8);
    unshift(numbers, 7);
    unshift(numbers, 6);
    unshift(numbers, 5);
    unshift(numbers, 4);
    unshift(numbers, 3);
    unshift(numbers, 2);
    unshift(numbers, 1);
    unshift(numbers, 0);
    unshift(numbers, -1);

    printf_list(numbers);

    pop(numbers);
    shift(numbers);

    printf_list(numbers);
    */
}

// initialize a list
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

// save item in memory before add it in the list
Item *item(int value)
{
    Item *new_item = malloc(sizeof(Item *));

    new_item->isInitialItem = 0;
    new_item->value = value;
    new_item->next = NULL;

    return new_item;
}

// get last item of the list
Item *last(List *list)
{
    Item *last_item = list->first_item;

    while (last_item->next != NULL)
    {
        last_item = last_item->next;
    }

    return last_item;
}

// get item with index
Item *get_item(int index, List *list)
{
    Item *current_item = list->first_item;

    for (int i = 0; i < index; i++)
    {
        current_item = current_item->next;
    }

    return current_item;
}

// add item at end of the list
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

// add item at begin of the list
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

// remove item at end of the list
void pop(List *list)
{
    int list_length = count(list);

    Item *last_item = last(list);
    if (list_length == 1)
    {
        last_item->isInitialItem = 1;
        last_item->value = 0;
        last_item->next = NULL;
    }
    else
    {
        Item *before_last = get_item(list_length - 2, list);

        before_last->next = NULL;
        free(last_item);
    }
}

// remove item at begin of the list
void shift(List *list)
{
    int list_length = count(list);

    Item *item_to_delete = list->first_item;

    if (list_length == 1)
    {
        item_to_delete->isInitialItem = 1;
        item_to_delete->value = 0;
        item_to_delete->next = NULL;
    }
    else
    {
        list->first_item = item_to_delete->next;
        free(item_to_delete);
    }
}

// display all items of the list
void printf_list(List *list)
{
    Item *current_item = list->first_item;

    if (current_item->isInitialItem == 1)
    {
        printf("\n[]\n");
    }

    else
    {
        printf("\n[");
        while (current_item->next != NULL)
        {
            printf("%d, ", current_item->value);
            current_item = current_item->next;
        }
        printf("%i]\n", last(list)->value);
    }
}

// count numbers of items in a list
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

// get value of item with index
int get_index(int index, List *list)
{
    Item *current_item = list->first_item;

    for (int i = 0; i < index; i++)
    {
        current_item = current_item->next;
    }

    return current_item->value;
}

// check if a list is empty (return 1 if it is empty or 0 if it is not empty)
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