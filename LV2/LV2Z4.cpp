#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x,f;

    cout << "Unesi x: ";
    cin >> x;

    if (x<0 || x>5) { cout << "Funkcija nije definisana!"; return 0; }

    if (x==0) f=0;
    else if (x>0 && x<3) f=(x-0)*(5-0)/(3-0)+0;
    else if (x==3) f=5;
    else if (x>3 && x<5) f=(x-3)*(2-5)/(5-3)+5;
    else f=2;

    cout << "f(x): " << f << endl;

    return 0;
}
