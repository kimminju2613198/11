
#include <stdio.h>

// Call by Value
void swap_value(int x, int y) {
    int temp;

    temp = x;
    x = y;
    y = temp;
}

// Call by Reference
void swap_reference(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int a = 3;
    int b = 5;

    printf("Before swap (Call by Value):\n");
    printf("a: %d, b: %d\n", a, b);

    swap_value(a, b);

    printf("After swap (Call by Value):\n");
    printf("a: %d, b: %d\n", a, b);

    printf("\nBefore swap (Call by Reference):\n");
    printf("a: %d, b: %d\n", a, b);

    swap_reference(&a, &b);

    printf("After swap (Call by Reference):\n");
    printf("a: %d, b: %d\n", a, b);

    return 0;
}
