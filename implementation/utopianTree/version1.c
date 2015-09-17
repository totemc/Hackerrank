#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    // scan number of test cases
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++){
        // instantiate height of tree
        int tree = 1;
        
        // get number of cycles
        int cycles;
        scanf("%d", &cycles);
        
        if (cycles == 0){
            printf("%d\n", tree);
        }
        else if (cycles % 2 == 0 || cycles % 2 == 1){
            for (int j = 1; j <= cycles; j++){
                if (j == 1){
                    tree = 2;
                }
                else if (j % 2 == 1){
                    tree = tree + tree;
                }
                else if (j % 2 == 0){
                    tree += 1;
                }
            }
            printf("%d\n", tree);
        }
        
    }
    return 0;
}
