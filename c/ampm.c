#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* time = (char *)malloc(10240 * sizeof(char));
    char hour[3] = "00";
    char min[3] = "00";
    char second[3] = "00";
    char ampm [3] = "AM";
    
    int h;
    
    scanf("%s",time);
    
    strncpy(ampm,time+8,2);
    strncpy(second, time+6,2);
    strncpy(min,time+3,2);
    strncpy(hour,time,2);
    
    if (strcmp(ampm,"AM") == 0) {
        if (h == 12) h=0;
        printf("%02d:%s:%s", h, min, second);
    } else {
        h=atoi(hour);
        if (h != 12) h+=12;
        printf("%02d:%s:%s", h, min, second);
    }
    
    return 0;
}
