#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int hh, mm, ss;
    char time[2];
    
    scanf("%d:%d:%d%s", &hh, &mm, &ss, time);
    
    if (strcmp(time, "PM") == 0 && hh != 12){
        hh = hh + 12;
    }
    if (strcmp(time, "AM") == 0 && hh == 12){
        hh = 0;
    }
    
    printf("%02d:%02d:%02d", hh, mm, ss);

    
    return 0;
}
