#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++){
        for (int j = 1; j < (t-i); j++){
            printf(" ");
        }
        for (int k = 0; k < (i+1); k++){
            printf("#");
        }
        printf("\n");
    }
    
    
    return 0;
}
