#ifndef LINKED_H
#define LINKED_H

#include <stdlib.h>


typedef struct Elmt_ {
	void					*data;
	struct Elmt_			*next;
}	Elmt;

typedef struct List_ {
	int								size;

	int								(*match)(const void *key1, const void *key2);
	void							(*destroy)(void *data);

	Elmt							*head;
	Elmt							*tail;
}	List;


List* list_init();
void list_destroy(List *list);

int list_ins_next(List *list, Elmt *element, const void *data);
int list_rem_next(List *list, Elmt *element, void **data);

#define list_size(list) ((list)->size)
#define list_head(list) ((list)->head)
#define list_tail(list)	((list)->tail)
#define list_is_head(list, element) ((element) == (list)->head ? 1 : 0)
#define list_is_tail(element) ((element)->next == NULL ? 1 : 0)
#define list_data(element) ((element)->data)
#define list_next(element) ((element)->next)


#endif
