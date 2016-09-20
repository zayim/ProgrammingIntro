#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float r=0.0,x;
    int i=-1,n;

    cout << "Unesi n: "; cin >> n;

    cout << "Unesi otpore: ";
    while (++i<n)
    {
        cin >> x;
        r+=(1.0/x);
    }

    cout << "Ukupan paralelni otpor: " << 1.0/r << endl;

    return 0;
}
