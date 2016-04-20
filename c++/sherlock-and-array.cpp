#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool sherlock(vector <long int> *A) {
    int e = A->size();
    int f=0,b=e;
    long int sf=0,sb=0;
    
    if (A->size()==1) return true;
    if (A->size()==2) return false;
    
    while ((f<e) && (b>0)) {
        if (sf==sb) 
            if (f==b) 
                return true;
            else {
                sf += (*A)[f]; f+=1;  
                sb += (*A)[b]; b-=1;
            }
        else 
            if (sf > sb) {
                sb += (*A)[b]; b-=1;
            }
            else {
                sf += (*A)[f]; f+=1;
            }
    }
    return false;
}

int main() {
    int T, Aij, n;
    long int N;
    
    cin >> T;
    
    vector < vector <long int> > A(T);
    
    
    for (int i=0;i<T;i++) {
        cin >> N;
        for (int j=0;j<N;j++) {
           cin >> Aij;
           A[i].push_back(Aij);
        }
    }
    
    for (int i=0;i<T;i++) {
        if (sherlock(&(A[i]))) 
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}
