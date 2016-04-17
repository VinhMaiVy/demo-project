#include <stdio.h>
#include <stdlib.h>


void update(int *a,int *b) {
    // Complete this function
    int aa, bb;
    aa = (int) *a + (int) *b;
    bb = abs((int) *a - (int) *b);
    *a = aa;
    *b = bb;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
