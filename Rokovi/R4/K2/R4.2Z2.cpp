#include <iostream>
using namespace std;
template <typename Tip>
int f(Tip niz[], int n)
{
    int i,j,z=0;
    Tip tmp[100];
    bool ima;

    for (i=0; i<n; i++)
    {
        ima=false;
        for (j=0;   j<i; j++) if (niz[i]==niz[j]) { ima=true; break; }
        for (j=i+1; j<n; j++) if (niz[i]==niz[j]) { ima=true; break; }
        if (ima) tmp[z++]=niz[i];
    }

    for (i=0; i<z; i++) niz[i]=tmp[i];
    return z;
}
int main()
{
    int a[100],n,m,i;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    m=f(a,n);
    cout << "Broj elemenata novog niza: " << m << endl << "Novi niz: ";
    for (i=0; i<m; i++) cout << a[i] << " ";
    if(!m) cout << "[PRAZAN NIZ]";

    return 0;
}
