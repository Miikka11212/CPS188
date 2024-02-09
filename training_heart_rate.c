#include <stdio.h>
#include <math.h>

int find_thr(char gender, int age, int rhr, char fl){
    // rhr for resting heartrate and fl for fitness level
    int mhr,thr = 0;
    double inten; 

    if (gender == 'M'){
        mhr = 203.7 / (1 + exp(0.033 * (age - 104.3)));
    }
    else if (gender == 'F'){
        mhr = 190.2/(1 + exp(0.0453 * (age - 107.5)));
    }
    //male or female?

    if (fl == '1'){
        inten = 0.55;
    } else if(fl == '2'){
        inten = 0.65;
    } else if(fl == '3'){
        inten = 0.8;
    }
    //fitness level of patient with three different levels.

    thr = (mhr - rhr) * inten + rhr;
    //calculate thr

    return thr;
    //return thr
}

int main(){
    int p1 = find_thr('M', 19, 64, '2'); 
    int p2 = find_thr('F', 20, 63, '3');
    int p3 = find_thr('M', 63, 82, '1');
    //declare three patients using function

    printf("patient one has a training heart rate of: ");
    printf("%d\n", p1); 
    printf("patient two has a training heart rate of: ");
    printf("%d\n", p2); 
    printf("patient three has a training heart rate of: ");
    printf("%d\n", p3); 
    //print out patient info

    return 0;
}
