#include <iostream>
using namespace std;
double zbir(double a[], int n)
{
    if (!(n-1)) return a[0];
    return (a[n-1]+zbir(a,n-1));
}
int main()
{
    double a[100];
    int i,n;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    cout << "Zbir elemenata: " << zbir(a,n) << endl;

    return 0;
}
