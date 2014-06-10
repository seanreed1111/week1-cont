//
//  strings_and_things.c
//  week1-cont
//
//  Created by Sean Reed on 6/3/14.
//  Copyright (c) 2014 seanreed.test. All rights reserved.
//

/*
 6. Given two strings: print true if they are equal and false if they are not equal.
 7. Given a string “This is a test”, replace te with gho
 • Try with strings that don’t contain te
 8. You have an array of strings. Create a new string, which is a concatenation of all the array elements.
 • Check that the length of individual strings when added equals the length of the final string
 • Make sure your program works with an array with no elements
 9. Given this string: “USA, Canada, Mexico, Bermuda, Grenada, Belize” -- create an array that contains these countries as its elements. Note: the comma is the separator
 • Make sure your program works when you add or remove countries from your string
 • Change your program so that the delimiter can be easily changed
 10. Modify the program in 9 above so it can understand countries separated by either a comma or a space or a period. “USA. Canada, Mexico, Bermuda Grenada, Belize”
 11. Change your program so that it can support any number of delimiters.
 12. Read a file and store its contents in a string
 13. Read an Objective-C file and count the number of lines in that program 14. Modify 11 to count the number of lines of comment marked with //
 */
 //15. Modify 12 to include /* */ style of comments


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// string.h gets me various string related functions
// Given char* s,t;
// Given const char* cs, ct;
// Given n is of type size_t;
// Given c is an int converted to char

// We can define the following functions

// char *strcpy(s,ct) copy string ct to string s, incl '\0'. return s
// char *strcat(s,ct) cat string ct onto the end of s. return s
// char *strncat(s,ct) cat at most n characters from string ct onto the end of string s. return s
// int strcmp(cs, ct) returns cs-ct


int strcompare(char* str1, char* str2);
int strlength(char* str);

int main(int argc, const char * argv[])
{
   char* hello = "12345678";
   char test[] = "4444";
    
   printf("Length of %s is %d \n", hello, strlength(hello));
  printf("Length of %s is %d \n", test, strlength(test));
    
    // 6. Given two strings: print true if they are equal and false if they are not equal.
    
    printf("strcompare(%s,%s) is %s \n", hello, hello, strcompare(hello,hello) ? "true" : "false");
    printf("strcompare(%s,%s) is %s \n", hello, test, strcompare(hello,test) ? "true" : "false");
    printf("strcompare(%s,%s) is %s \n", "hello", "jello", strcompare("hello","jello") ? "true" : "false");
    printf("strcompare(%s,%s) is %s \n\n", "hello", "hella", strcompare("hello","hella") ? "true" : "false");

    // 7. Given a string “This is a test”, replace "te" with "gho"
    
//    char test2[] = "This is a test";
    
//    printf("Before test: test2 = %s\n", test2);
    
    // locate insertion point
    
//    char* insert = strstr(test2, "te");
//    strcopy(test2, "te","gho");

//    printf("After test: test2 = %s\n", test2);
    
    // 8. You have an array of strings. Create a new string, which is a concatenation of all the array elements.
    
    char* myarray[4];
    myarray[0] = "Butch ";
    myarray[1] = "Cassidy ";
    myarray[2] = "and the Sundance ";
    myarray[3] = "Kid";
    
    printf("%s%s%s\n", myarray[0],myarray[1],myarray[2]);
    char *result8 = malloc((strlength(myarray[0])
                           +strlength(myarray[1])
                           +strlength(myarray[2])
                           +strlength(myarray[3])+1)*sizeof(char));
    
    
    for(int i=0;i<4;i++){
        strcat(result8, myarray[i]);
    }
    printf("Result 8 is %s\n", result8);
    
    int match  = (strlength(result8) == strlength(myarray[0]) +
                  strlength(myarray[1]) +
                  strlength(myarray[2]) +
                  strlength(myarray[3]));
    
    printf("String lengths of original and concatted arrays %s\n", match ? "match" : "do not match");
    

    free(result8);
    
    return 0;
    
} // end of main

int strcompare(char* str1, char* str2) // return 1 if strings are the same and 0 otherwise
{
    int result=0;
    
    if (strlength(str1) != strlength(str2))
        return result;
    
    while (*str1 && (result = ((*str1) == (*str2)))) {
        str1++;
        str2++;
    }
    return result;
} // end of strcompare

int strlength(char* str){ // does not include null character '\0'
    int length = 0;
    
    while ((*str++) != '\0') {
        length++;
    }
    return length;
} // end of strlength

