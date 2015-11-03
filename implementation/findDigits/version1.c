#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int array[10000000000];
    
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++){
        
        int testcase;
        int count = 0;
        scanf("%d", &testcase);
        
        int testcaseCount = testcase;
        int testcaseArray = testcase;
        
        while (testcaseCount){
            testcaseCount /= 10;
            count ++;
        }
        
        int array[count];
        
        for (int i = 0; i < count; i++){
            array[i] = testcaseArray % 10;
            testcaseArray /= 10;
        }
        
        int returnValue = 0;
        
        for (int i = 0; i < count; i++){
            if (array[i] != 0){
                if (testcase % array[i] == 0){
                    returnValue++;
                }
            }
        }
        
        printf("%d\n", returnValue);
        
        
        
    }
    
    return 0;
}
