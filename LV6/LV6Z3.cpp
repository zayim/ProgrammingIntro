#include <iostream>
using namespace std;
int main()
{
    int n,a[100],i;
    double z=1.0/0.0;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    for (i=n-1; i>=0; i--) z=1.0/z + a[i];

    cout << "Vrijednost razlomka: " << z << endl;

    return 0;
}
