#include <stdio.h>

// function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function to find the highest, lowest, and middle values
void findValues(int a, int b, int c, int *highest, int *lowest, int *middle) {
    if (a > b) swap(&a, &b);
    if (a > c) swap(&a, &c);
    if (b > c) swap(&b, &c);

    *highest = c;
    *lowest = a;
    *middle = b;
}

int main() {
    int num1, num2, num3;
    printf("Enter three integer numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int highest, lowest, middle;
    findValues(num1, num2, num3, &highest, &lowest, &middle);

    printf("Highest value: %d\n", highest);
    printf("Lowest value: %d\n", lowest);
    printf("Middle value: %d\n", middle);

    printf("Values in ascending order: %d, %d, %d\n", lowest, middle, highest);

    return 0;
}