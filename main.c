
#include <stdio.h>

int main(void) {
    int i;
    int grade[5];
    int *ptr = grade;
    int sum = 0;
    double average;

    // Input grades
    for (i = 0; i < 5; i++) {
        printf("grade[%d] = ", i);
        scanf("%d", &grade[i]);
    }

    // Print grades and calculate the sum
    for (i = 0; i < 5; i++) {
        printf("grade[%d] = %d\n", i, *(ptr + i));
        sum += *(ptr + i);
    }

    // Calculate the average
    average = (double)sum / 5;

    printf("Average: %.2f\n", average);

    return 0;
}
