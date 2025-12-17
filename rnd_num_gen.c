#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){

    //* First of all, call the random function.

    srand(time(NULL)); // set the base seed value based on the time

    //* trying to get random number between 1 and 6
    int min = 50;
    int max = 100;

    int randomNum =  (rand() % (max - min + 1)) + min;

    printf("%d \n\n", randomNum);
    return 0;
}