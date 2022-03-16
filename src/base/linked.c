#include <stdlib.h>
#include <string.h>

#include "linked.h"
#include "memory.h"


List* list_init() {
	List *list = allocate(malloc, sizeof(List));

	list->size = 0;
	list->destroy = free;
	list->head = NULL;
	list->tail = NULL;

	return list;
}

void list_destroy(List *list) {
	void 	*data;

	while (list_size(list) > 0) {
		if (list_rem_next(list, NULL, (void **)&data) == 0 && list->destroy != NULL) {
			list->destroy(data);
		}
	}

	memset(list, 0, sizeof(List));
	return;
}

int list_ins_next(List *list, Elmt *element, const void *data) {
	Elmt 	*new_element = allocate(malloc, sizeof(Elmt));
	new_element->data = allocate(malloc, sizeof(data));

	if (element == NULL) {
		if (list_size(list) == 0)
			list->tail = new_element;

		new_element-> next = list->head;
		list->head = new_element;
	} else {
		if (element->next == NULL)
			list->tail = new_element;

		new_element->next = element->next;
		element->next = new_element;
	}

	list->size++;
	return 0;
}

int list_rem_next(List *list, Elmt *element, void **data) {
	Elmt	*old_element;

	if (list_size(list) == 0)
		return -1;

	if (element == NULL) {
		*data = list->head->data;
		old_element = list->head;
		list->head = list->head->next;

		if (list_size(list) == 1)
			list->tail = NULL;
	} else {
		if (element->next == NULL)
			return -1;

		*data = element->next->data;
		old_element = element->next;
		element->next = element->next->next;

		if (element->next == NULL)
			list->tail = element;
	}

	free(old_element);
	list->size--;

	return 0;
}
