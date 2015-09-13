#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    // number of test cases
    int t;
    
    // create buffers to hold scans
    char a[1000000];
    char b[1000000];
    
    // get lengths to iterate
    int length_a = 0;
    int length_b = 0;
    
    // flag to see when characters match
    bool flag = false;
    
    // scan number of cases
    scanf("%d", &t);
    
    // for loop for number of cases
    for (int i = 0; i < t; i++){
        
        // scan words
        scanf("%s", a);
        scanf("%s", b);
        
        // store lengths
        length_a = strlen(a);
        length_b = strlen(b);
        
        // initial counter for first word
        
        // compare a
        for (int j = 0; j < length_a; j++){
            
            // to b
            for (int k = 0; k < length_b; k++){
                
                // if letters match, flag is true
                if (a[j] == b[k]){
                    
                    flag = true;
                    
                }
                
            }
            
           
        }
        
        if (flag){
            
            printf("YES\n");
            flag = false;
            
            
        }
        else if(flag == false){
            
            printf("NO\n");
        }
        
        
        
        
        
        
        
        
    }
    
    return 0;
}
