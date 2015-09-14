#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int diagonal(int a);

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int t;
    
    scanf("%d", &t);
    
    int answer = diagonal(t);
    
    printf("%d", answer);
   
    return 0;
}


int diagonal(int a){
    
    int absolute = 0;
    
    int left = 0;
    
    int right = 0;
        
    for (int i = 0; i < a; i++){
        
        for (int j = 0; j < a; j++){
            
            int tmp;
            
            scanf("%d", &tmp);
            
            if (i == j){
                
                left = left + tmp;
            }
            if (i+j == (a-1)){
                
                right = right + tmp;
            }
            
        }
        
        
        
    }
    
    absolute = abs(left-right);
    
    return absolute;
    
    
}
