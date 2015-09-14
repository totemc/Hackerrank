#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// prototype
long long addArray(int a);

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    // buffer for n
    int t;
    
    scanf("%d", &t);
    
    long long sum = addArray(t);
    
    printf("%lli", sum);
    
    return 0;
}

long long addArray(int a){
    
    long long sum = 0;
    
    for (int i = 0; i < a; i++){
        
        long long tmp;
        
        scanf("%lli", &tmp);
        
        sum = sum + tmp;
        
    }
    
    return sum;
    
}
