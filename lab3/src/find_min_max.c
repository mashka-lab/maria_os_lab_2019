#include "find_min_max.h"

#include <limits.h>

#include <stdio.h>
#include <limits.h>

struct MinMax {
    int min;
    int max;
};

struct MinMax GetMinMax(int *array, unsigned int begin, unsigned int end) {
    struct MinMax min_max;
    min_max.min = INT_MAX;
    min_max.max = INT_MIN;
    
    for (unsigned int i = begin; i <= end; i++) {
        if (array[i] < min_max.min) {
            min_max.min = array[i];
        }
        if (array[i] > min_max.max) {
            min_max.max = array[i];
        }
    }
    
    return min_max;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    struct MinMax result = GetMinMax(array, 0, 4);
    printf("Min: %d, Max: %d\n", result.min, result.max);
    return 0;
}
