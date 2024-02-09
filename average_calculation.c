#include <stdio.h>

void BubbleSort(double a[], int array_size)
{
    int i, j;
    for (i = 0; i < (array_size - 1); ++i)
    {
        for (j = 0; j < array_size - 1 - i; ++j )
        {
            if (a[j] > a[j+1])
            {
                double temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}

double average(double quiz[], int size){
    double sum = 0, avg;
    BubbleSort(quiz, size);
    quiz[0] = 0;
    quiz[1] = 0;
    for(int i = 0; i < size; i++){
        sum += quiz[i];
    }
    avg = sum/size;
    return avg;
}


double find_grade(double quiz[], double midterm, double final){
    int size = 10; // Assuming fixed size for quiz array
    double avg = average(quiz, size);
    avg *= 0.25;
    if (final >= midterm){
        final *= 0.5;
        midterm *= 0.25;
    }
    else {
        final *= 0.35;
        midterm *= 0.4;
    }
    return(avg + final + midterm);

}

int main(){
    double quizzes[] = {9.5, 6, 4, 10, 7.8, 3.4, 9, 5.6, 9, 10};
    double grade = find_grade(quizzes, 73, 84);
    printf("%.2f\n", grade);
    return 0;
}
