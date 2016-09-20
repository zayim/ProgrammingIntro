#include <iostream>
using namespace std;
void f(int a[], int n, int b[])
{
    int i,j,z;

    for (i=0; i<n; i++)
    {
        z=1+a[i];
        for (j=2; j<a[i]; j++) if (!(a[i]%j)) z+=j;
        b[i]=z;
    }
}
int main()
{
    int a[100],b[100],i,n;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    f(a,n,b);

    cout << "Niz B: ";
    for (i=0; i<n; i++) cout << b[i] << " ";

    return 0;
}
