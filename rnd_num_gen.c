#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){

    //* First of all, call the random function.

    srand(time(NULL)); // set the base seed value based on the time

    //* trying to get random number between 50 and 100
    int min = 50;
    int max = 100;

    //* Making it 3 random guesses to simulate a dice.
    int randomNum1 =  (rand() % (max - min + 1)) + min;
    int randomNum2 =  (rand() % (max - min + 1)) + min;
    int randomNum3 =  (rand() % (max - min + 1)) + min;

    printf("%d %d %d  \n\n", randomNum1, randomNum2, randomNum3);
    return 0;
}