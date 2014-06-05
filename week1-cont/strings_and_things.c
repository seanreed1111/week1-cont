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
 */

#include <stdio.h>

int strcompare(char* str1, char* str2);
int strlength(char* str);

int main(int argc, const char * argv[])
{
    char* hello = "12345678";
    char test[] = "4444";
    
    printf("Length of %s is %d \n", hello, strlength(hello));
    printf("Length of %s is %d \n", test, strlength(test));
    
    printf("strcompare(%s,%s) is %d \n", hello, hello, strcompare(hello,hello));
    printf("strcompare(%s,%s) is %d \n", hello, test, strcompare(hello,test));
    printf("strcompare(%s,%s) is %d \n", "hello", "jello", strcompare("hello","jello"));
    
    return 0;
}

int strcompare(char* str1, char* str2)
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