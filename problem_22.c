//
//  problem_22.c
//  week1-cont
//
//  Created by Sean Reed on 6/12/14.
//  Copyright (c) 2014 seanreed.test. All rights reserved.
//
//22. Implement the bubble-sort algorithm

#include <stdio.h>
#include <stdlib.h>

void generate(int* array, int n); // generates an array of size n
void swap(int *left, int *right);
void bubblesort(int *arrayptr, int length);

int main(int argc, char* argv[]){ //22. Implement the bubble-sort algorithm
    int length=10; // 10 elements in the array
    int *arrayptr = malloc(length * sizeof(int));
    generate(arrayptr,length);
    
    printf("Before sorting, the array is \n");
    for (int i=0; i<length; i++) {
        printf("%d ",arrayptr[i]);
    }
    printf("\n");

    bubblesort(arrayptr, length);
    
    printf("After sorting, the array is \n");
    for (int i=0; i<length; i++) {
        printf("%d ",arrayptr[i]);
    }
    printf("\n");

    
    free(arrayptr);
    return 0;
}

void swap(int *left, int *right){
    int temp;
    temp = *left;
    *left = *right;
    *right = temp;
}

void generate(int *array, int length){
    for(int i = 0; i< length;i++){
        array[i] = 1-i;
    }
}

void bubblesort(int *arrayptr, int length){
    int i, loop, temp;
    for (i=0; i < length-1; i++) {
        for (loop = 0; loop < length - i - 1; loop++) {
            if (arrayptr[loop] > arrayptr[loop+1]) {
                temp = arrayptr[loop];
                arrayptr[loop] = arrayptr[loop+1];
                arrayptr[loop+1] = temp;
            }
        }
    }
}

