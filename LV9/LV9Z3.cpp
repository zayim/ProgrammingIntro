#include <iostream>
using namespace std;
void f(double a[], int n, double b[])
{
    int i;
    double z=0.0;

    for (i=0; i<n; i++) z+=a[i];
    z/=((n-1)*1.);
    for (i=0; i<n; i++) b[i]=z-a[i];
}
int main()
{
    double a[100],b[100];
    int i,n;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    f(a,n,b);

    cout << "Trazeni niz: ";
    for (i=0; i<n; i++) cout << b[i] << " ";

    return 0;
}
