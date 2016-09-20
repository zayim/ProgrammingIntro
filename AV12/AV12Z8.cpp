#include <iostream>
using namespace std;
double najmanji(double a[], int n)
{
    if (!(n-1)) return a[0];
    return min(a[n-1],najmanji(a,n-1));
}
int main()
{
    double a[100];
    int n,i;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    cout << "Najmanji element: " << najmanji(a,n) << endl;

    return 0;
}
