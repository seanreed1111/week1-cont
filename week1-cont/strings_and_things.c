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

int strcompare(char* str1, char* str2);
int strlength(char* str);
int strreplace(char* str, char* findstr, char* replacestr); //not yet completed

/* Not yet implemented
char** splitAtIndex(char* str, int index); //not yet implemented

char* deleteAtIndex(char* original, char* target, int index);// not yet implemented
char* addAtIndex(char* original, char* target, int index);// not yet implemented

int strindex(char* str, char* findstr); // not yet implemented

 */

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
    
    char test2[] = "This is a test";
    
    printf("Before test: test2 = %s\n", test2);
    
    strreplace(test2, "te","gho");

    printf("After test: test2 = %s\n", test2);
    
    // 8. You have an array of strings. Create a new string, which is a concatenation of all the array elements.
    
    
    return 0;
}

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
}

int strlength(char* str){
    int length = 0;
    
    while ((*str) != '\0') {
        length++;
        str++;
    }
    return length;
}




// IMPLEMENTATION INCOMPLETE
//
//
//
//

// strindex parses through str and returns the index where first occurence of findstr begins. -1 means findstr not found.
int strindex(char* str, char* findstr){
    int found = -1;

    found = 10;// hard code

    return found;
}


// strreplace searches str and replaces first occurrence of findstr with replacestr. -1 means findstr not found.

int strreplace(char* str, char* findstr, char* replacestr){
    int found = strindex(str, findstr);
    
    for (int i = found; (replacestr[i-found] && (str[i]=replacestr[i-found]));i++){
    
    }
    return found;
}

char* deleteAtIndex(char* original, char* target, int index){
    char* returnstr;
    
    return returnstr;
}

char* addAtIndex(char* original, char* target, int index){
    char* returnstr;
    
    return returnstr;
}

//given a string str[0..n-1] of length n, splitAtIndex returns ptr to two strings, str[0..index-1] and str[index..(n-1)

/*
char** splitAtIndex(char* str, int index){
    char* str1, str2;
    
    char* strstr[2];
    
    if (index == -1) //index out of bounds
        return 0;
    
    // find the first string
    for(int i=0;i<index ;i++ ) {
        str1[i] = str[i];
    }
    
    return strstr;
}
 */
