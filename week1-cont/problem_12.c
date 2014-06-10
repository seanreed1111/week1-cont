//
//  problem_12.c
//  week1-cont
//
//  Created by Sean Reed on 6/10/14.
//  Copyright (c) 2014 seanreed.test. All rights reserved.
//

//12. Read a file and store its contents in a string

//13. Read a file and count the number of lines in that program
//14. Modify 11 to count the number of lines of comment marked with //
//15. Modify 12 to include /* */ style of comments

#include <stdio.h>

int main(int argc, char* argv[]){
    int c;
    int ct = 0;
    FILE *fp;
    const char filename[] = "/Users/seanreed/iosProjects/week1-cont/week1-cont/problem_12_alt.txt"; // absolute path needed
    
    if((fp = fopen(filename, "r"))){
        
        // loop through to get the size of string needed
        
        while ((c = getc(fp)) != EOF){
            ct++;
            printf("%c",c);
        }
        
        rewind(fp);
        
        char string[ct+1];
        
        for(int i = 0;i < ct; i++){//copy to the string
            string[i] = getc(fp);
        }
        
        fclose(fp);
    
        printf("\n String is\n%s", string);
        
        return 0;
    }
}

