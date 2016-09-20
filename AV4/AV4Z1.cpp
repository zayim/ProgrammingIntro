#include <iostream>
using namespace std;
int main()
{
    double x,z=0.0,p=1.0;
    int n,a,i=-1;

    cout << "Unesi x,n: "; cin >> x >> n;
    cout << "Unesi n cijelih brojeva: ";
    while (++i<n)
    {
        cin >> a;
        p*=x;
        z += (i%2 ? -1 : 1)*a*1.0/p;
    }
    cout << "Rezultat: " << z << endl;

    return 0;
}
