#include <stdlib.h>
#include <string.h>

#include "list.h"

void list_init(List *list, void (*destroy)(void *data)) {
    list->size = 0;
    list->capacity = 0;
    list->destroy = destroy;
    list->items = NULL;

    return;
}





