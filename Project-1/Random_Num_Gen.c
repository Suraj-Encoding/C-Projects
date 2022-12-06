      // ********* # How to make a random number generator *********
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    // Here we inject random behaviour in our program
    srand(time(0));  // time.h
    // number = rand(); // stdlib.h -> Generates a random number from 0 to infinity.
    number = rand()%100 + 1;  // Generates a random number between 1 and 100.
    printf("The number is: %d\n",number);
    return 0;
}