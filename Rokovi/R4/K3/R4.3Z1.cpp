#include <iostream>
using namespace std;
int parni(int niz[], int n)
{
    if (n==1) return !(niz[0]%2);
    else return parni(niz,n-1) + !(niz[n-1]%2);
}
int main()
{
    int a[100],n,i;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    cout << "Broj parnih elemenata: " << parni(a,n) << endl;
    return 0;
}
