#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

typedef struct List_ {
	int								size;
	int								capacity;

	int								(*match)(const void *key1, const void *key2);
	void							(*destroy)(void *data);

	void							*items;
}	List;


void init(List *list, void (*destroy)(void *data));
void destroy(List *list);

/* CONST VOID **DATA vs. VOID *DATA */

int append(List *list, void *data);
int put(List *list, int index, void *data);
int extend(List *list1, List *list2); 

void grow(List *list);
void shrink(List *list);

void del(List *list, int index);
void pop(List *list);
void get(List *list, int index);

#define size(list) ((list)->size)
#define capacity(list) ((list)->capacity)


#endif
