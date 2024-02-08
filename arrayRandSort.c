#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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


int main(){
    int num = 0;
    //int random = 0;
    //srand(time(NULL));

    printf("Type amount of number: \n");

    scanf("%d", &num);



    
    int array[num];

    for(int i = 0; i < num; i++){
        num = rand() % 100 + 1;
        array[i] = num;
    }

    printf("your list is: \n");

    for (int i = 0; i < num+1; i++) {
        printf("%d\n", array[i]);
    }

    BubbleSort(array, num);

    printf("sorted list is: \n");


    for (int i = 0; i < num+1; i++) {
        printf("%d\n", array[i]);
    }

}