#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int sum(int x, int y){
    return x + y;
}

int prod(int x, int y){
    return x * y;
}

int shouldNotBeChanged(int (*operation)(int, int)){
    srand(time(NULL));
    int a = rand() % 100 + 1;
    int b = rand() % 100 + 1;
    printf("The result between %d and %d is %d", a, b, operation(a, b));
}

int main(){
    shouldNotBeChanged(&prod);

}