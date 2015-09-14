#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// prototype
int addArray(int a);

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    // create int for N
    int t;
    
    // scan into t
    scanf("%d", &t);
    
    // run addArray function, pass in N
    int sum = addArray(t);
    
    // print return value
    printf("%d", sum);
    
    return 0;
}

// function to add array elements
int addArray(int a){
    
    // buffer for sum
    int sum = 0; 
    
    // run through array
    for (int i = 0; i < a; i++){
        
        int tmp; 
        
        scanf("%d", &tmp);
        
        sum = sum + tmp;
        
    }
    
    return sum;
}
