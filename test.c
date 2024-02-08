#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    float c, d;
    a = 0, b = 0, c = 0, d = 0;

    printf("Input an integer for one side of the triangle: \n");
    scanf("%d", &a);

    printf("Input another integer for the other side of the triangle: \n");
    scanf("%d", &b);

    c = sqrt(a*a + b*b);
    d = a + b + c;
//    printf("%0.2f", c);

    printf("The hypotenus of this triangle is: %0.2f \n", c);
    printf("The perimeter of this triangle is: %0.2f", d);


}