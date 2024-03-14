#include <stdio.h>
#include <unistd.h>

#define MAX_LINES 100
#define MAX_LEN 1000

void BubbleSort(int a[], int array_size)
{
    int i, j, temp;
    for (i = 0; i < (array_size - 1); ++i)
    {
        for (j = 0; j < array_size - 1 - i; ++j )
        {
            if (a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}

int output(double array[]){
    
    int length = *(&array + 1) - array;

    for (int i = 0; i < length; ++i) {
        if (array[3] < array[i]) {
            array[3] = array[i];
        }
    }

    printf("original value: \t normalised value: \n");
    for (int i = 3; i < length; i++){
        double norm = 0;
        norm = array[1] + (array[3] - array[1] * (array[length + 1] - array[3])/(array[2]-array[1]));
        printf("%lf \t %lf", array[i], norm);
    }
}

int main(void){
    chdir("/Users/miikka/Desktop/CPS188/CPS188/");

    char data[MAX_LINES][MAX_LEN];
  
    FILE *file;

    file = fopen("normalise.txt", "r");
  
     if (file == NULL){
        printf("Error opening file.\n");
        return 1;
    }
  
    int line = 0;

    while (!feof(file) && !ferror(file)){
        if (fgets(data[line], MAX_LEN, file) != NULL){
        line++;
        }
    }
  
    fclose(file);

    double array[15] = {7, 0.0, 10.0, 67.9, 45.2, 33.3, 66.1, 83.5, 14.3, 50.5};
    output(array);

  return 0;
}