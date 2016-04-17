#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;


void PrintGrid(vector < vector < int > > *Grid) {
    int x,y;
    for (y=0;y<(*Grid).size();y++) {
        for (x=0;x<(*Grid)[y].size();x++) {
            cout << (*Grid)[y][x] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


vector < vector < int > > getLockerDistanceGrid(int cityLength, int cityWidth, vector < int > lockerXCoordinates, vector < int > lockerYCoordinates) {

    int x,y,coordinate;
    
    vector < vector < int > > Grid (cityWidth, vector<int>(cityLength));
    
    for (x=0;x<cityLength;x++) {
        for (y=0;y<cityWidth;y++) {
            Grid [y][x] = 9;
        }
    }
    
    PrintGrid(&Grid);
    
    for (coordinate=0; coordinate<lockerXCoordinates.size(); coordinate++) { 
        for (x=0; x<cityLength;x++)
            for (y=0; y<cityWidth;y++)
                if (Grid[y][x] > abs(lockerXCoordinates[coordinate] -1 - x) + abs(lockerYCoordinates[coordinate] -1 - y))
                    Grid[y][x] = abs(lockerXCoordinates[coordinate] -1 - x) + abs(lockerYCoordinates[coordinate] -1 - y);
                    
        PrintGrid(&Grid);
        
    }
    
    return Grid;

}

int main() {
    
    int cityLength = 8;
    int cityWidth = 6;
    vector < int > lockerXCoordinates = {2,1,6};
    vector < int > lockerYCoordinates = {1,5,3};
    vector < vector < int > > Grid;
    
    Grid = getLockerDistanceGrid(cityLength, cityWidth, lockerXCoordinates, lockerYCoordinates);
    
    return 0;
}