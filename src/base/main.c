#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "linked.h"

int main(void) {
	Elmt	*pires, *bergkamp, *henry;	

	if ((pires = malloc(sizeof(Elmt))) == NULL)
		return -1;

	if ((bergkamp = malloc(sizeof(Elmt))) == NULL)
		return -1;

	if ((henry = malloc(sizeof(Elmt))) == NULL)
		return -1;

	List *passes_to_goal = list_init();		

	list_ins_next(passes_to_goal, pires, (void *) 7);
	list_ins_next(passes_to_goal, bergkamp, (void *) 10);
	list_ins_next(passes_to_goal, henry, (void *) 14);

	list_destroy(passes_to_goal);
	
	return 0;
}
