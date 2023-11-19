#include <stdio.h>
#include <stdlib.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void){

    int hour = 0, min = 0, total_time = 0;
    int dep_time = 0, arr_time = 0;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    total_time = (hour*60) + min;
    find_closest_flight(total_time, &dep_time, &arr_time);
    int checkdh = dep_time / 60, checkah = arr_time / 60;
    int checkdm = dep_time % 60, checkam = arr_time % 60;

    printf("Closest departure time is %d:%d", checkdh, checkdm);
    if (checkdm == 0)printf("0");
    if (checkdh >= 12)printf(" p.m, ");
    else printf(" a.m, ");
    printf("arriving at %d:%d", checkah, checkam);
    if (checkam == 0)printf("0");
    if (checkah >= 12)printf(" p.m.");
    else printf(" a.m.");

    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time){
    int i = 0, check = 0;
    
    int d1 = 8 * 60, d2 = 9 * 60 + 43, d3 = 11 * 60 + 19, d4 = 12 * 60 + 47, d5 = 14 * 60 + 8, d6 = 15 * 60 + 45, d7 = 19 * 60, d8 = 21 * 60 + 45;
    int a1 = 10 * 60 + 16, a2 = 11 * 60 + 52, a3 = 13 * 60 + 31, a4 = 15 * 60, a5 = 16 * 60 + 8, a6 = 17 * 60 + 55, a7 = 21 * 60 + 20, a8 = 23 * 60 + 58; 

    if (desired_time < (d1 + (d2 - d1) / 2)){
        *departure_time = d1;
        *arrival_time = a1;
    }
        
    else if (desired_time < (d2 + (d3 - d2) / 2)){
        *departure_time = d2;
        *arrival_time = a2;
    }
        
    else if (desired_time < (d3 + (d4 - d3) / 2)){
        *departure_time = d3;
        *arrival_time = a3;
    }
        
    else if (desired_time < (d4 + (d5 - d4) / 2)){
        *departure_time = d4;
        *arrival_time = a4;
    }
        
    else if (desired_time <= (d5 + (d6 - d5) / 2)){
        *departure_time = d5;
        *arrival_time = a5;
    }
    
    else if (desired_time < (d6 + (d7 - d6) / 2)){
        *departure_time = d6;
        *arrival_time = a6;
    }
    else if (desired_time < (d7 + (d8 - d7) / 2)){
        *departure_time = d7;
        *arrival_time = a7;
    }
    
    else {
        *departure_time = d8;
        *arrival_time = a8;
    }
        
}