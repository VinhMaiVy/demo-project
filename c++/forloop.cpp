#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i,a,b;
    const char* n[] = {"one","two","three","four","five","six","seven","eight","nine"};
    cin >> a >> b;
    for (i=a; i<=b; i++) {
        if ((i>0) && (i <= 9)) { cout << n[i-1] << "\n"; }
        else if (i%2 == 0) { cout << "even\n"; }
        else { cout << "odd\n"; }
    }
    return 0;
}
