//
//  problems_9-11.c
//  week1-cont
//
//  Created by Sean Reed on 6/10/14.
//  Copyright (c) 2014 seanreed.test. All rights reserved.
//

//9. Given this string: “USA, Canada, Mexico, Bermuda, Grenada, Belize” -- create an array that contains these countries as its elements. Note: the comma is the separator
//• Make sure your program works when you add or remove countries from your string
//• Change your program so that the delimiter can be easily changed
//10. Modify the program in 9 above so it can understand countries separated by either a comma or a space or a period. “USA. Canada, Mexico, Bermuda Grenada, Belize”
//11. Change your program so that it can support any number of delimiters.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

int wordCount(char *src, const char *delimiter);//counts # of words in string, with each word separated by token. Changes src
void splitStringIntoArray(char* src, char* dest[], const char *delimiter);// changes src

int main(){
    char originalstr[] = "USA,Canada,Mexico,Bermuda,Grenada,Belize";
    char* string9 = malloc((strlen(originalstr)+1)*sizeof(char));
    string9 = strcpy(string9, originalstr);
    
    //originalstr[]; // because calls to strtok() destroy the original string, so do wordCount and splitStringIntoArray
    
    
    const char* delimiter = ",";
    
    int ct = wordCount(string9, delimiter);
    
    assert(ct>0); // crashes the program if assertion is not true
    
    char* resultarr[ct]; // declares array of appropriate size
    
    string9 = strcpy(string9, originalstr);
    
    splitStringIntoArray(string9, resultarr, delimiter);
    
    printf("\nAnswer #9 is\n");
    for (int i = 0; i < ct; i++) {
        printf("Token %d is %s\n",i,resultarr[i]);
    }
    
    
    return 0;
    

}

int wordCount(char *str, const char *delimiter){
    int result = 0;// error code if it returns <= 0
    
    char *token = strtok(str,delimiter);
    if ( token != NULL) {
        result++; // count first token
        
        while (strtok(NULL,delimiter) != NULL){
            result++;
        }
    }
    
    return result;
}

void splitStringIntoArray(char* src, char* dest[], const char *delimiter){
    int ct = 0;
    char *token = strtok(src,delimiter);
    if ( token != NULL) {
        dest[ct++]= token; // count first token
        
        while ((token = strtok(NULL,delimiter)) != NULL){
            dest[ct++] = token; //count up remaining tokens
        }
    }
    
}
