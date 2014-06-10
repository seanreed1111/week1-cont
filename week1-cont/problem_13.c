//
//  problem_13.c
//  week1-cont
//
//  Created by Sean Reed on 6/10/14.
//  Copyright (c) 2014 seanreed.test. All rights reserved.
//

//13. Read a file and count the number of lines in that program

#include <stdio.h>

int main(int argc, char* argv[]){

    int c;
    int ct = 0;
    FILE *fp;
    const char filename[] = "/Users/seanreed/iosProjects/week1-cont/week1-cont/problem_12_alt.txt"; // absolute path needed
    
    if((fp = fopen(filename, "r"))){
        
        // loop through to count number of newlines
        
        while ((c = getc(fp)) != EOF){
            if (c == '\n') {ct++;}
        }
        
        fclose(fp);
        printf("The file has %d lines\n", ct);
        return 0;
    }
}
