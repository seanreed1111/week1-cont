//
//  problem_20.c
//  week1-cont
//
//  Created by Sean Reed on 6/12/14.
//  Copyright (c) 2014 seanreed.test. All rights reserved.
//

//22. Implement the bubble-sort algorithm
//23. Object oriented programming
//• Write a program that creates a class for storing Names and Addresses
//• Write a program that reads names and addresses from a file and creates a new instance of the above class for each
//new entry
//• Identify duplicate names by using NSMutableDictionary with the above objects. Use names as keys and the objects
//above as values.
//24. Implement a simple hash table
//• Define the interface first
//• Implement the methods
//25. Test your program #22 to use your implementation of the hash table instead of NSMutableDictionary

//20. Evaluate S using n = 100 terms where S = √ (6*( 1+1/2^2+1/3^2 +1/4^2 + 1/5^2 + … ) )

//21. Calculate the value of n above if it is given that the above sum is equal to PI to 6 decimal places.

#include <stdio.h>
#include <math.h>


int main(int argc, char* argv[]){
    double answer;
    long double sum = 0.0;
    for(int i=1;i<= 100;i++){
        sum += pow((long double)i,-2);
    }
    answer = sqrt((long double)6.0*sum);
    
    printf("The sum of the first 100 terms is %f\n",answer);
    
    
    return 0;
}
