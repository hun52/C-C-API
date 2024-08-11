/// LIBRARY HEADER
#include "api.h"
#include <stdio.h>

int32_t main() {
    int32_t result = 0;
    add(&result, 3, 4);
    fprintf(stdout, "3 + 4 = %d\n", result);

    sub(&result, 3, 4);
    fprintf(stdout, "3 - 4 = %d\n", result);

    mul(&result, 3, 4);
    fprintf(stdout, "3 * 4 = %d\n", result);

    div(&result, 3, 4);
    fprintf(stdout, "3 / 4 = %d\n", result);

    return 0;

}

/// STANDARD HEADER

