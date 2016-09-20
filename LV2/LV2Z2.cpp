#include <iostream>
using namespace std;
int main()
{
    double a,b,c,d,max;

    cout << "Unesi 4 realna broja: "; cin >> a >> b >> c >> d;

    max=a;
    if (b > max) max=b;
    if (c > max) max=c;
    if (d > max) max=d;

    cout << "Najveci: " << max << endl;

    return 0;
}
