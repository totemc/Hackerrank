#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    float t;
    
    int positive = 0;
    int negative = 0;
    int zero = 0;
    
    int array[101];
    
    scanf("%f", &t);
    
    for (int j = 0; j < t; j++){
        
        int tmp;
        scanf("%d", &tmp);
        
        array[j] = tmp;
    }
    
    for (int i = 0; i < t; i++){
        
        if (array[i] > 0){
            positive++;
        }
        else if (array[i] < 0){
            negative++;
        }
        else if(array[i] == 0){
            zero++;
        }
        
    }
    
    float p = positive/t;
    float n = negative/t;
    float z = zero/t;
    
    printf("%.3f\n", p);
    printf("%.3f\n", n);
    printf("%.3f\n", z);
    
    
    return 0;
}
