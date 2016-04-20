#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <cstdint>
#include <cstring>
using namespace std;


int main(){
    int n;
    char c[2] = "0";
    

    cin >> n;
    
    char grid[101][101];
    
    vector< vector <int> > grid_i (n, vector <int>(n));
    
    for(int i = 0; i < n; i++){
       cin >> grid[i];
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            memcpy(c, &grid[i][j],1);
            grid_i[i][j] = atoi(c);
        }
    }
    
    for(int i = 1; i < n-1; i++) {
        for(int j = 1; j < n-1; j++) {
            if ((grid_i[i][j]>grid_i[i-1][j]) && (grid_i[i][j]>grid_i[i+1][j]) && (grid_i[i][j]>grid_i[i][j-1]) && (grid_i[i][j]>grid_i[i][j+1]))
                memcpy(&grid[i][j],"X",1);

        }
    }
    
    for(int i = 0; i < n; i++)
        cout << grid[i] << endl;
    
    return 0;
}
