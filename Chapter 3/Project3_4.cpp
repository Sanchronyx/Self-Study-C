#include <stdio.h>

/*Write a program that prompts the user to enter a telephonenumber in the form (xxx) xxx-xxxx 
and then displays the number in the form xxx.xxx.xxxx:

Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
You entered: 404.817.6900 */

int main(void){
    int o1, o2, o3;

    printf("Enter phone number [(xxx) xxx-xxxx]:");
    scanf("(%d) %d-%d", &o1, &o2, &o3);
    printf("You entered: %d.%d.%d", o1, o2, o3);

    return 0;

}