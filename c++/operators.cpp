#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double cost;
    int tip;
    int tax;
    double total;
    cin >> cost >> tip >> tax;
    total = cost + (cost*tip/100) + (cost*tax/100);
    cout << "The total meal cost is " << (int) round(total) << " dollars.";
    return 0;
}
