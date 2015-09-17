#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    // number of test cases
    int t;
    
    // number of times 3 appears is divisible by 5
    // number of times 5 appears is divisible by 3
    // 1,  3,   5,     11
    // -1, 555, 33333, 55555533333
    
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        
        int mod_3 = n % 3; //2
        int mod_5 = n % 5; //1
        
        int remainder = mod_3 + mod_5;
        
        int divisible = n - remainder;
        
        if (n % 3 == 0){
            for (int j = 0; j < n; j++){
                printf("5");
            }
            printf("\n");
        }
        else if (n % 5 == 0){
            for (int j = 0; j < n; j++){
                printf("3");
            }
            printf("\n");
        }
        /*else if (divisible % 3 == 0 && remainder % 5 == 0){
            for (int j = 0; j < divisible; j++){
                printf("5");
            }
            for (int j = 0; j < remainder; j++){
                printf("3");
            }
            printf("\n");
        }
        else if (divisible % 5 == 0 && remainder % 3 == 0){
            for (int j = 0; j < divisible; j++){
                printf("3");
            }
            for (int j = 0; j < remainder; j++){
                printf("5");
            }
            printf("\n");
        }*/
        else if (remainder % 3 == 0 || remainder % 5 == 0){
            for (int j = 0; j < mod_3*3; j++){
                printf("5");
            }
            for (int j = 0; j < mod_5*5; j++){
                printf("3");
            }
            printf("\n");
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}
