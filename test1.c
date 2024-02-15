#include <stdio.h>
#include <stdlib.h>
int main()
{
    // declare variables
    int EmpNumber, NoOfShifts, i;
    float BaseWageRate, hours;
    float TotalHours, GrossPay;
    char filename[40];
    //printf("Enter file name: ");
    //gets(filename);
    // open file eneterd by user in read mode
    FILE *fp = fopen("L4_data.txt", "r");
    // check file is opened successfully or not
    if (fp == NULL)
    {
        printf("File %s doesnot exist or error in file opening!");
        exit(0);
    }
    // display output table headers
    printf("Employee Number\t\tTotal Hours\tGross Pay\n");
    // read data from file line by line until eof()
    while (!feof(fp))
    {
        // read employee number, no. of shifts and base wage rate
        fscanf(fp, "%d%d%f", &EmpNumber, &NoOfShifts, &BaseWageRate);
        // read hours worked from file and find total hours
        TotalHours = 0;
        i = 1;
        while (i <= NoOfShifts)
        {
            fscanf(fp, "%f", &hours);
            TotalHours = TotalHours + hours;
            i++;
        }
        // calculate employee's gross pay
        if (TotalHours <= 15)
        {
            GrossPay = BaseWageRate * TotalHours;
        }
        else if (TotalHours <= 25)
        {
            GrossPay = (BaseWageRate + (5 / 100.0 * BaseWageRate)) * TotalHours;
        }
        else
        {
            GrossPay = (BaseWageRate + (10 / 100.0 * BaseWageRate)) * TotalHours;
        }
        // display result
        printf("%d\t\t\t%6.2f\t\t%8.2f\n", EmpNumber, TotalHours, GrossPay);
    }
    // close file
    fclose(fp);
}