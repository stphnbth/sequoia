#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

typedef struct List {
    int                 size;
    int                 capacity;
    void                (*destroy)(void *data);
    int                 *items;
} List;

void list_init(List *list, void (*destroy)(void *data));
void list_destroy(List *list);

void list_grow(List *list);
void list_shrink(List *list);

void list_append(List *list, int data);
void list_insert(List *list, int data, int index);
void list_remove(List *list, int element);

#define list_size(list) ((list)->size)
#define list_capacity(list) ((list)->capacity)

#endif