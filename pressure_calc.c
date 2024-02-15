#include<stdio.h>
#include<math.h>

double pressure(double temp){
    double pressure = 0;
    pressure = temp * (10/273.15);
    return pressure;
}

int main(){
    double temp, newpre = 0;
    printf("enter your temperature in kalvins: \n");
    scanf("%lf", &temp);
    newpre = pressure(temp);
    printf("Temperature (K)\n");
    for (int i = 0; i < 10; i ++){
        printf("-");
    }
    printf("\n 273.15 \n");
    printf(" %.2lf \n",temp);
    printf("Pressure (atm)\n");
    for (int i = 0; i < 10; i ++){
        printf("-");
    }
    //printf("\n");
    printf("\n 10 \n");
    printf(" %.2f \n", newpre);
    if (newpre >= 50){
        printf(
            "KABOOM!\n"
        );
    }
}