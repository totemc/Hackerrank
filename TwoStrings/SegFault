#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool check(char* a, char*b);

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t = 0;
    
    char string1[100000];
    char string2[100000];
    
    bool flag;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++){
        
        scanf("%s", string1);
        scanf("%s", string2);
        
        flag = check(string1,string2);
        
        if (flag){
            printf("YES\n");
        }
        else if (!flag){
            printf("NO\n");
        }
        
    }
    
    return 0;
}

bool check(char* a, char*b){
    
    int alphabet[100001] = {0};
    int length_a = strlen(a);
    int length_b = strlen(b);
    
    for (int i = 0; i < length_a; i++){
        
        alphabet[i] = a[i] - '97';
        
    }
    
    for (int i = 0; i < length_b; i++){
        
        if (alphabet[i] == b[i] - '97'){
            
            return true;
        }
        
    }
    return false;
}
