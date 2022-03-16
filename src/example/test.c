#include <stdlib.h>

#include "sum_integers.h"

int main() {
    int size = 11;
    int integers[size] = {1, 3, 23, 28, 12, 4, 19, 7, 8, 10, 14};

    if (sum_integers(integers, size) == 129) {
        return 0;
    } else {
        return 1;
    }
}
    
