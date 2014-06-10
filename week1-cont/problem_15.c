//
//  problem_15.c
//  week1-cont
//
//  Created by Sean Reed on 6/10/14.
//  Copyright (c) 2014 seanreed.test. All rights reserved.
//

//14. Modify 13 to count the number of lines of comment marked with //
//15. Modify 14 to include /* */ style of comments
//
#include <stdio.h>


int main(int argc, char* argv[]){
    
    int c;
    int ct = 0;
    FILE *fp;
    const char filename[] = "/Users/seanreed/iosProjects/week1-cont/week1-cont/problem_12_alt.txt"; // absolute path needed
    
    if((fp = fopen(filename, "r"))){
        
        // loop through to count number of '/*' comments
        
        while ((c = getc(fp)) != EOF){
            if (c == '/') {
                if ((c=getc(fp)) == '*'){
                    ct++;
                }
            }
            if (c == EOF){
                break;
            }
            
            // now look for the closing of these comments
        }
        
        fclose(fp);
        printf("The file has %d commented lines\n", ct);
        return 0;
    }
}
