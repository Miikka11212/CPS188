#include <stdio.h>

int timeMars(int a){
    int perigee = 5460000;
    int apogee = 401000000;
    int time1, time2 = 0;
    

    if (a = 1){
        time1 = perigee / 100;
        time2 = apogee / 100;
        printf("Earth to Mars %d perigee, %d apogee, takes %d to perigee, %d to apogee.", perigee, apogee, time1, time2);
    }   

    else if (a = 2){
        time1 = perigee / 500;
        time2 = apogee / 500;
        printf("Earth to Mars %d perigee, %d apogee, takes %d to perigee, %d to apogee.", perigee, apogee, time1, time2);
    }   

    else if (a = 3){
        time1 = perigee / 41000;
        time2 = apogee / 41000;
        printf("Earth to Mars %d perigee, %d apogee, takes %d to perigee, %d to apogee.", perigee, apogee, time1, time2);
    }   

    else{
        printf("please enter between 1-3 for three types of transportation");
    }
}

int timeMoon(int a){
    int perigee = 363104;
    int apogee = 405696;
    int time1, time2 = 0;
    

    if (a = 1){
        time1 = perigee / 100;
        time2 = apogee / 100;
        printf("Earth to Mars %d perigee, %d apogee, takes %d to perigee, %d to apogee.", perigee, apogee, time1, time2);
    }   

    else if (a = 2){
        time1 = perigee / 500;
        time2 = apogee / 500;
        printf("Earth to Mars %d perigee, %d apogee, takes %d to perigee, %d to apogee.", perigee, apogee, time1, time2);
    }   

    else if (a = 3){
        time1 = perigee / 41000;
        time2 = apogee / 41000;
        printf("Earth to Mars %d perigee, %d apogee, takes %d to perigee, %d to apogee.", perigee, apogee, time1, time2);
    }   

    else{
        printf("please enter between 1-3 for three types of transportation");
    }
}

int timeVenus(int a){
    int perigee = 38000000;
    int apogee = 261000000;
    int time1, time2 = 0;
    

    if (a = 1){
        time1 = perigee / 100;
        time2 = apogee / 100;
        printf("Earth to Mars %d perigee, %d apogee, takes %d to perigee, %d to apogee.", perigee, apogee, time1, time2);
    }   

    else if (a = 2){
        time1 = perigee / 500;
        time2 = apogee / 500;
        printf("Earth to Mars %d perigee, %d apogee, takes %d to perigee, %d to apogee.", perigee, apogee, time1, time2);
    }   

    else if (a = 3){
        time1 = perigee / 41000;
        time2 = apogee / 41000;
    }   

    else{
        printf("please enter between 1-3 for three types of transportation");
    }
}

int time(int (*operation)(int)){
    int num;
    printf("enter a way of transportation");
    scanf("%d", &num);
    operation(num);
}

int main(){
    time(&timeMoon);
}

