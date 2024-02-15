#include <stdio.h>
#include <math.h>

int factorial(int m){
    int result = 1;
    for (int i = 1; i <= m; i++){
        result *= i;
    }
    return result;
}

int choose(int n, int r){
    int result = 1;
    result = factorial(n)/(factorial(r)*factorial(n-r));
    return result;
}

void print_triangle(int rows){
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%d ", choose(i, j));
        }
        printf("\n");
    }
}

int main(){
    int num;
    printf("Enter number of rows of triangle you want to print: \n");
    scanf("%d", &num);
    printf("the triangle with %d rows: \n", num);
    print_triangle(num);
}