#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int V,n,i;
    int ar[1000];
    
    cin >> V >> n;
    for (int a = 0; a<n; a++) {
       cin >> ar[a];
    }
    
    i=0;
    while (V!=ar[i])
        i++;
        
    cout << i;
    
    return 0;
}
