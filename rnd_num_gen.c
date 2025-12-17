#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){

    //* First of all, call the random function.

    srand(time(NULL)); // set the base seed value based on the time

    int min = 1;
    int max = 6;
    int randomNum =  (rand() % max) + min;

    printf("%d \n\n", randomNum);
    return 0;
}