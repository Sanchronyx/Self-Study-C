#include <stdio.h>

int main(void){
    int hour, min, compm, hourm;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);
    compm = hour * 60 + min;
    hourm = hour * 60;
    
    int dep1 = 8 * 60, dep2 = 9 * 60 + 43, dep3 = 11 * 60 + 19, dep4 = 12 * 60 + 47, 
    dep5 = 14 * 60 + 8, dep6 = 15 * 60 + 45, dep7 = 19 * 60, dep8 = 21 * 60 + 45;

    if (compm < dep1){
        printf("Closest departure time is 8:00 a.m, arriving at 10:16 a.m.");
    }
    else if (compm < dep2){
        printf("Closest departure time is 9:43 a.m, arriving at 11:52 a.m.");
    }
    else if (compm < dep3){
        printf("Closest departure time is 11:19 a.m, arriving at 1:31 p.m.");
    }
    else if (compm < dep4){
        printf("Closest departure time is 12:47 p.m, arriving at 3:00 p.m.");
    }
    else if (compm <= dep5){
        printf("Closest departure time is 2:00 p.m, arriving at 4:08 p.m.");
    }
    else if (compm < dep6){
        printf("Closest departure time is 3:45 p.m, arriving at 5:55 p.m.");
    }
    else if (compm < dep7){
        printf("Closest departure time is 7:00 p.m, arriving at 9:20 p.m.");
    }
    else {
        printf("Closest departure time is 9:45 p.m, arriving at 11:58 p.m.");
    }
    return 0;
}