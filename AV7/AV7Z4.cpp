#include <iostream>
using namespace std;
int main()
{
    int a[100],b[100],n,phi=0,i,j;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++)
    {
        cin >> a[i];
        phi=2;
        for (j=2; j<a[i]; j++) if (!(a[i]%j)) phi++;
        b[i]=phi;
    }

    cout << "Novi niz: ";
    for (i=0; i<n; i++) cout << b[i] << " ";

    return 0;
}
