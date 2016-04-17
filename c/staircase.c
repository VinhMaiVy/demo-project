#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,j,k,n; 
    scanf("%d",&n);
    k = n;
    for (i=n;i>0;i--) {
        for (j=1;j<=n;j++) {
            if (j<k) {
                printf(" ");
            } else {
                printf("#");
            }
        }
        printf("\n");
        k--;
    }
    return 0;
}
