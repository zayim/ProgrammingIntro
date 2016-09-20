#include <iostream>
#include <algorithm>
using namespace std;
bool f(int a[], int n, int &bp, int &bn)
{
    bp=bn=0;
    bool vrati=false;
    int i;

    for (i=0; i<n; i++)
    {
        a[i]%2 ? bn++ : bp++ ;
        if (a[i] < 0) vrati=true;
    }

    return vrati;
}
int main()
{
    int i,n,a[100],bp,bn;
    bool ima;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    ima=f(a,n,bp,bn);

    cout << "Broj parnih:   " << bp << endl;
    cout << "Broj neparnih: " << bn << endl;
    ima ? cout << "IMA bar jedan negativan !" : cout << "NEMA nijedan negativan !" ;

    return 0;
}
