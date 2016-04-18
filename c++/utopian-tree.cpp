#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int utopian_tree(int n) {
    int i = 1;
    bool spring = true;
    for (int j = 0; j<n; j++) {
        if (spring) { 
            i = i*2; 
            spring = false;
        }
        else {
            i=i+1;
            spring = true;
        }
    }
    return i;
}

int main(){
    int a0, t;
    int cycles[10];
    
    cin >> t;
    
    for(a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cycles[a0]=n;
    }
    
    for(a0 = 0; a0 < t; a0++){
        cout << utopian_tree(cycles[a0]) << "\n";
    }
    return 0;
}
