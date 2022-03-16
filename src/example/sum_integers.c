#include <stdlib.h>
#include "sum_integers.h";

int sum_integers(int[] integers, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += integers[i];
    }

    return sum;
}