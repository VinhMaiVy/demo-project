#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,j,n;
    vector <int> vi;
    cin >> n;
    
    for (j=0;j<n;j++) {
        cin >> i;
        vi.push_back(i);
    }
    
    sort(vi.begin(),vi.end());
    
    for (j=0;j<n;j++) {
        cout << vi[j] << " ";
    }
    
    return 0;
}
