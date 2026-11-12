
#include <stdio.h>

int main(void) {
    int i = 10;
    char c = 'a';

    int *iptr;
    char *cptr;
    int *iptr2;

    iptr = &i;
    cptr = &c;
    iptr2 = iptr;

    printf("i : %p\n", (void *)iptr);
    printf("%p (size: %zu)\n", (void *)&i, sizeof(iptr));

    printf("c : %p\n", (void *)cptr);
    printf("%p (size: %zu)\n", (void *)&c, sizeof(cptr));

    printf("iptr2 : %p, %d\n", (void *)iptr2, *iptr2);

    return 0;
}
