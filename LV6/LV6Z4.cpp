#include <iostream>
using namespace std;
int main()
{
    int a[100],tmp[100],n,i,j,z=0,s=0;
    bool ima;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    for (i=0; i<n; i++)
    {
        ima=false;
        for (j=0; j<n; j++) if (a[i]==a[j] && i!=j) { ima=true; break; }
        if (!ima) tmp[z++]=a[i];
    }

    cout << "Niz nakon odstranjenih elemenata: ";
    for (i=0; i<z; i++) cout << tmp[i] << " ";
    cout << endl;

    s=z;
    for (i=0; i<n; i++)
    {
        ima=false;
        for (j=0; j<s; j++) if(a[i]==tmp[j]) { ima=true; break; }
        if (!ima) tmp[s++]=a[i];
    }

    cout << "Broj elemenata koji se ponavljaju: " << (s-z) << endl;
    cout << "To su elementi: ";
    for (i=z; i<s; i++) cout << tmp[i] << " ";

    return 0;
}
