#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
   vector<int> integers;
   int i;
   
   while (str.find(",", 0) != string::npos)
    { //does the string a comma in it?
        size_t pos = str.find(",", 0);             //store the position of the delimiter
        i = stoi(str.substr(0, pos), nullptr);      //get the token
        str.erase(0, pos + 1);                      //erase it from the source 
        integers.push_back(i);                      //and put it into the array
    }
  integers.push_back(stoi(str, nullptr));            //the last token is all alone 
  
  return integers;
  
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
