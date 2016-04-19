#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

int main(){
    int diff_day;
    int d1;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;

    struct tm date1 = {0,0,0,d1,m1-1,y1-1900};
    struct tm date2 = {0,0,0,d2,m2-1,y2-1900};
    time_t x = mktime(&date1);
    time_t y = mktime(&date2);

    if ( x != (time_t)(-1) && y != (time_t)(-1) )
        diff_day = (int) difftime(x, y) / (60 * 60 * 24);

    if (y1>y2)
        cout << "10000" << endl ;
    else
        if ((m1>m2) && (y1==y2))
            cout << (m1-m2)*500 << endl;
        else
            if ((diff_day>1) && (m1==m2) && (y1==y2))
                cout << diff_day*15 << endl;
            else
                cout << "0" << endl;
        
    return 0;
}
