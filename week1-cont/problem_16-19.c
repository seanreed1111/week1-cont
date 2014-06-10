//
//  problem_16-19.c
//  week1-cont
//
//  Created by Sean Reed on 6/10/14.
//  Copyright (c) 2014 seanreed.test. All rights reserved.
//


#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
    //calculate 3^2
    int power = pow(3,2);
    
    //16. Calculate the nth power of an integer e.g. 32 = 9
    //17. Use the above program to calculate the tenth power of 2 billion
    
    printf("3 to the 2nd power is %d\n",power);
    printf("2e9 to the 10th power is %.0f\n",pow(2000000000,10));
    
    //18. Write a function to swap two ints
    
    int x = 1;
    int y = 100;
    
    printf("X is %d and Y is %d\nPerforming swap now.\n",x,y);
    
    int temp;
    temp = x;
    x = y;
    y = temp;
    
    printf("After the swap X is %d and Y is %d!\n\n",x,y);
    
    //19. Modify the function above to solve #18 without a temp variable
    //• Try to swap two numbers 2.1 billion and 2 billion using the above program
    
    printf("Problem #19 -- X is %d and Y is %d\nPerforming swap now.\n",x,y);
    
    x = x^y;
    y = x^y;
    x = x^y;
    
    printf("After the swap X is %d and Y is %d!\n\n",x,y);
    
    // reset x and y
    
    x  = 2000000000;
    y = 2100000000;
    
    printf("Problem #19 continued\n -- X is %d and Y is %d\nPerforming swap now.\n",x,y);
    
    x = x^y;
    y = x^y;
    x = x^y;
    
    printf("After the swap X is %d and Y is %d!\n\n",x,y);
}
