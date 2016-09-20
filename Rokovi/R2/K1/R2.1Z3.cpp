#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a[100],z=0.0;
    int n,i;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi n realnih brojeva: ";
    for (i=0; i<n; i++) cin >> a[i];

    while (n--)
    {
        if (z+a[n]>0) z=log(a[n]+z);
        else { cout << "Vrijednost izraza nije realan broj !"; return 0; }
    }
    cout << "Vrijednost izraza: " << z << endl;

    return 0;
}
