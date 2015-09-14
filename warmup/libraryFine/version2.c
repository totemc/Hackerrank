#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    // on or before due, x0
    // after in same month 1x15 per day
    // same year, 1x500 per month
    // not same year, 10,000 fine
    
    
    // actual return dates
    int ad, am, ay;
    
    // expected return dates
    int d, m, y;
    
    // storage of fines
    int fines = 0;
    
    // scan of actual return dates
    scanf("%d %d %d", &ad, &am, &ay);

    // scan of expected return date
    scanf("%d %d %d", &d, &m, &y);
    
    
    //printf("%d %d %d", d, m, y);
    
    
    if (ad > d && am == m && ay == y){
        int days = ad - d;
        
        for (int i = 0; i < days; i++){
            fines += 15;
        }
        printf("%d\n", fines);
    }
    else if (am != m && ay == y){
        int months = am - m;
        
        for (int i = 0; i < months; i++){
            fines += 500;
        }
        printf("%d\n", fines);
    }
    else if (ay > y){
        fines = 10000;
        printf("%d\n", fines);
    }
    else{
        printf("%d\n", fines);
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
