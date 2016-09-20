#include <iostream>
#include <algorithm>
using namespace std;
void izvrni(int a[], int n)
{
    int i;
    for (i=0; i<n/2; i++) swap(a[i],a[n-1-i]);
}
int main()
{
    int i,n,a[100];

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    izvrni(a,n);

    cout << "Novi niz: ";
    for (i=0; i<n; i++) cout << a[i] << " ";

    return 0;
}
