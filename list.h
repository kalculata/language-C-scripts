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

// initialize a list
List *list();

// save item in memory before add it in the list
Item *item(int value);

// get last item of the list
Item *last(List *list);

// get item with index
Item *get_item(int index, List *list);

// add item at end of the list
void append(List *list, int value);

// add item at begin of the list
void unshift(List *list, int value);

// remove item at end of the list
void pop(List *list);

// remove item at begin of the list
void shift(List *list);

// display all items of the list
void printf_list(List *list);

// count numbers of items in a list
int count(List *list);

// get value of item with index
int get_index(int index, List *list);

// check if a list is empty (return 1 if it is empty or 0 if it is not empty)
int isEmpty(List *list);