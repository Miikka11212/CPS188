#include <math.h>
#include <stdio.h>

double speed(double temp){
    double a = 1086 * sqrt((5 * temp + 297)/247);

    a = 1.09728*a;

    return a;
} 


int main(void){
    double temp, result;
    printf("please type a number for temperature");
    scanf("%lf", &temp);

    temp = temp*9/5 +32;
    result = speed(temp);

    printf("the speed of sound at %lf farenheit is: %lf", temp, result);

    return 0;
}