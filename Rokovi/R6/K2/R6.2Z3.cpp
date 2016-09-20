#include <iostream>
using namespace std;
template <typename Tip>
bool DaLiJeOscilatoran(Tip niz[], int n)
{
    bool vece,manje;

    if (n==1) return true;
    niz[n-1]>niz[n-2] ? vece=true : vece=false;
    niz[n-1]<niz[n-2] ? manje=true : manje=false;
    n--;

    while (--n)
    {
        if (vece && niz[n]>=niz[n-1]) return false;
        if (manje && niz[n]<=niz[n-1]) return false;
        vece= !vece;
        manje= !manje;
    }
    return true;
}
int main()
{
    int a[100],n,i;
    double b[100];

    cout << "Unesi n: "; cin >> n;
    for (i=0; i<n; i++) cin >> a[i];
    if (DaLiJeOscilatoran(a,n)) cout << "JEST oscilatoran !" << endl;
    else cout << "NIJE oscilatoran !" << endl;

    cout << "Unesi n: "; cin >> n;
    for (i=0; i<n; i++) cin >> b[i];
    if (DaLiJeOscilatoran(b,n)) cout << "JEST oscilatoran !" << endl;
    else cout << "NIJE oscilatoran !" << endl;

    return 0;
}
