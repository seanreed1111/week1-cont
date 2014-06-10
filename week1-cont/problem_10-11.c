//
//  problem_10.c
//  week1-cont
//
//  Created by Sean Reed on 6/10/14.
//  Copyright (c) 2014 seanreed.test. All rights reserved.
//

//9. Given this string: “USA, Canada, Mexico, Bermuda, Grenada, Belize” -- create an array that contains these countries as its
//elements. Note: the comma is the separator
//• Make sure your program works when you add or remove countries from your string
//• Change your program so that the delimiter can be easily changed
//10. Modify the program in 9 above so it can understand countries separated by either a comma or a space or a period. “USA.Canada, Mexico, Bermuda Grenada, Belize”
//11. Change your program so that it can support any number of delimiters.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

int wordCount(char *src, const char *delimiters);//counts # of words in string, with each word separated by token
void splitStringIntoArray(char* src, char* dest[], const char *delimiters);

int main(){
    char originalstr[] = "USA,Canada Mexico.Bermuda,Grenada Belize";
    char* string10 = malloc((strlen(originalstr)+1)*sizeof(char));
    string10 = strcpy(string10, originalstr);
    
    // need a copy because calls to strtok(through wordCount and splitStringIntoArray) destroy the original string
    
    const char* delimiters = ", ."; // 11. can include comma, space, or period, or any
    // number of other delimiters here
    
    int ct = wordCount(string10, delimiters);
    
    assert(ct>0); // crashes the program if assertion is not true
    
    char* resultarr[ct]; // declares array of appropriate size
    
    string10 = strcpy(string10, originalstr);
    
    splitStringIntoArray(string10, resultarr, delimiters);
    
    printf("\nAnswer #10 is\n");
    for (int i = 0; i < ct; i++) {
        printf("Token %d is %s\n",i,resultarr[i]);
    }
    
    free(string10);
    
    return 0;
    
    
}

int wordCount(char *str, const char *delimiters){
    int result = 0;// error code if it returns <= 0
    // need to check EACH of the allowed delimiters in turn
    
    char *token = strtok(str,delimiters);
    if ( token != NULL) {
        result++; // count first token
        
        while (strtok(NULL,delimiters) != NULL){
            result++;
        }
    }
    
    return result;
}

void splitStringIntoArray(char* src, char* dest[], const char *delimiters){
    int ct = 0;
    // need to check EACH of the allowed delimiters in turn
    char *token = strtok(src,delimiters);
    if ( token != NULL) {
        dest[ct++]= token; // count first token
        
        while ((token = strtok(NULL,delimiters)) != NULL){
            dest[ct++] = token; //count up remaining tokens
        }
    }
    
}

