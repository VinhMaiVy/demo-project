#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void digits_from_n(int n, vector<int> *v_d) {
    
    int l_n;
    l_n = n;
    
    v_d->push_back(l_n%10);
    l_n = l_n / 10;
    
    while (l_n > 0) {
        v_d->push_back(l_n%10);
        l_n = l_n / 10;
    } 
    
}

int count_divisible(int n, vector<int> *v_d) {
    int d;
    int c = 0;
    while (!v_d->empty()) {
        d = v_d->back();
        cout << d << " ";
        v_d->pop_back();
        if (d != 0) if (n%d == 0) c++;
    }
    cout << endl;
    return c;
}


int main(){
    int t;
    vector<int> v_n;
    vector<int> v_d;
    cin >> t;
    
    for(int a0 = 0; a0 < t; a0++) {
        int n;
        cin >> n;
        v_n.push_back(n);
    }
    
    for (int a0 = 0; a0 < t; a0++) {
        digits_from_n(v_n[a0], &v_d);
        cout << count_divisible(v_n[a0], &v_d) << "\n";
    }
    
    
    return 0;
}