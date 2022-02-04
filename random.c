//the rand() function is used in c/c++ to generate random numbers in the range[0,RAND_MAX).
//NOTE: if random number are generated with rand() without first calling strand(), your program
//will create the same sequence of numbers each time it runs.
//srand():The srand() function sets the starting point for producing a series of pseudo-random
//integers.If srand() is not called, the rand() seed is a set as if srand(1) were called at program start.
//Any other value for seed sets the generator to a different starting point.

// c program to generate random numbers
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// Driver program
int main(void)
{   int i;
    //this program will create different sequence of numbers on every program run
    //use current time as seed for random generator.
    srand(time(0));
    for(i = 0 ; i < 4 ; i++){
        printf("%d\n",rand());
    }
    return 0;
}