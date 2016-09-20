#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x,y;

    cout << "Unesi x,y: "; cin >> x >> y;
    cout << "Veci je: " << (x+y+abs(x-y))/2.0 << endl;

    return 0;
}
