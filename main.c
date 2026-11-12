
#include <stdio.h>
#include <stdint.h>

int main(void) {
    uintptr_t pc;
    uintptr_t pi;
    uintptr_t pd;

    pc = 10000;
    pi = 10000;
    pd = 10000;

    printf("Before increment:\n");
    printf("pc = %lu, pi = %lu, pd = %lu\n",
           (unsigned long)pc,
           (unsigned long)pi,
           (unsigned long)pd);

    pc += sizeof(char);
    pi += sizeof(int);
    pd += sizeof(double);

    printf("After increment:\n");
    printf("pc = %lu, pi = %lu, pd = %lu\n",
           (unsigned long)pc,
           (unsigned long)pi,
           (unsigned long)pd);

    return 0;
}
