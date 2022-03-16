#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "linked.h"

int main(void) {
	List *passes_to_goal = list_init();		

	list_ins_next(passes_to_goal, NULL, (void *) 7);
	list_ins_next(passes_to_goal, passes_to_goal->tail, (void *) 10);
	list_ins_next(passes_to_goal, passes_to_goal->tail, (void *) 14);

	list_destroy(passes_to_goal);
	return 0;
}
