#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    // number of test cases
    int t;
    scanf("%d", &t);
    
    // loop thru number of test cases
    for (int i = 0; i < t; i++){
        int arrived_early = 0;
        // int arrived_late;
        int students;
        scanf("%d", &students);
        
        int requirement;
        scanf("%d", &requirement);
        
        //int array[students];
        
        
        
        for (int j = 0; j < students; j++){
            int tmp;
            scanf("%d", &tmp);
            
            if (tmp <= 0){
                arrived_early += 1;
            }
            
        }
        if (arrived_early >= requirement){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    
    return 0;
}
