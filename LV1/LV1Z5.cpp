#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b;

    cout << "Unesi a,b: "; cin >> a >> b;
    cout << "Veci je: " << (a+b+abs(a-b))/2.0 << endl;

    return 0;
}
