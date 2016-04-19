#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;
int lonelyinteger(vector < int > a) {
    int n,m;

    sort(a.begin(),a.end());
    
    if (a.size()==1) return a[0];
    
    while (!a.empty())
    {
        n = a.back();
        a.pop_back();
        if (a.empty()) return n;
        m = a.back();
        if (n!=m) return n;
        a.pop_back();
    }
    return n;
}

int main() {
    int res;
    
    int _a_size;
    cin >> _a_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = lonelyinteger(_a);
    cout << res;
    
    return 0;
}
