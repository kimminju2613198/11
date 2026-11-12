
#include <stdio.h>

int main(void) {
    int i = 4;  // Try changing the value to 300.

    int *pi = &i;
    char *pc = (char *)&i;

    printf("%d, %d, %d\n", i, *pi, *pc);

    return 0;
}
