#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,j, n;
    int remove,start,end;
    
    vector <int> vi;
    cin >> n;
    
    for (j=0;j<n;j++) {
        cin >> i;
        vi.push_back(i);
    }
    
    cin >> remove;
    cin >> start >> end;
    
    vi.erase(vi.begin()+remove-1);
    vi.erase(vi.begin()+start-1,vi.begin()+end-1);

    cout << vi.size() << "\n";
    
    for (j=0;j<vi.size();j++) {
        cout << vi[j] << " ";
    }

    return 0;
}
