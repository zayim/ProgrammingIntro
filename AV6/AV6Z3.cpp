#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,i;
    double a[100],s=0.0;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    while (n--) s=sqrt(s+a[n]);

    cout << "Rezultat: " << s << endl;
    return 0;
}
