/*
Modify Programming Project 8 from Chapler 5 so that it includes the following function:
v o i d f i n d _ c l o s e s t _ f l i g h t ( i n t d e s i r e d _ t im e ,
i n t * d e p a r t u r e _ t im e ,
i n t * a r r i v a l _ t im e ) ;
This function will find the flight whose departure time is closest to d e s i r e d _ t im e
(expressed in minutes since midnight). It will store the departure and arrival times of this
flight (also expressed in minutes since midnight) in the variables pointed to by
d e p a r t u r e _ t im e and a r r i v a l _ t i i n e , respectively.

Midnight = 00:00 (START)
*/

#include <stdio.h>
#include <stdlib.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void){

    int hour = 0, min = 0, total_time = 0;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);
    total_time = (hour*60) + min;

    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time){
    int i = 0, check = 0;
    
    


}