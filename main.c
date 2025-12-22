#include <stdio.h>

void incrementByValue(int n) {
    n = n + 1;
}

void incrementByReference(int *n) {
    *n = *n + 1;
}

int main() {
    int value = 50;

    incrementByValue(value);
    printf("After incrementByValue: %d (unchanged)\n", value);

    incrementByReference(&value);
    printf("After incrementByReference: %d (incremented)\n", value);

    return 0;
}
