/*Write a function day_of year (month, day, year) that returns the day of the year
(an integer between l and 366) specified by the three arguments.
*/

#include <stdio.h>

int day_of_year (int month, int day, int year)
{
int i, sum;
    for (i = 2; i =< month; i++ ){
        if (month == 1){
            month += 0;
        }
        else if (month == 2){
        month += 28;
        }
        else if (month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            month += 31;
        }
        else {
            month += 30;
        }
    sum = month + day;
    }
    return sum;
}