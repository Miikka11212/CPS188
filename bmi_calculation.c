#include<stdio.h>
#include<math.h>

void bmi(double weight, double height){
    double bmi = weight/(height*height);
    if (bmi < 18.5){
        printf("you are underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9){
        printf("you are normal\n");
    } 
    else if (bmi >= 24.9 && bmi < 30){
        printf("you are overweight\n");
    }
    else{
        printf("you are obese\n");
    }// print out the result 
}

int main(){
    bmi(81.5, 1.88);
    bmi(68, 1.55);
    bmi(94, 1.57);
    //using the function
}