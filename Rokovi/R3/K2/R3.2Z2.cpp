#include <iostream>
using namespace std;
template <typename Tip>
bool DaLiJeRastuci(Tip niz[], int n)
{
    int i=-1;
    while (++i<n-1) if (niz[i] >= niz[i+1]) return false;
    return true;
}
int main()
{
    double a[100];
    int n,i;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    DaLiJeRastuci(a,n) ? cout << "JESTE rastuci !" : cout << "NIJE rastuci !";
    return 0;
}
