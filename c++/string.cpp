#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
  string a,b;
  char c;
  cin >> a >> b;
  cout << a.length() << " " << b.length() << "\n";
  cout << a+b << "\n";
  c = a[1];
  a[1] = b[1];
  b[1] = c;
  cout << a << " " << b;
  return 0;
}