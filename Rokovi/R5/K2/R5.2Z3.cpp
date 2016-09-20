#include <iostream>
using namespace std;
template <typename Tip>
bool super(Tip niz[], int n)
{
    int i=0;
    Tip z=niz[0];

    for (i=1; i<n; i++)
    {
        if (niz[i]<=z) return false;
        z+=niz[i];
    }

    return true;
}
int main()
{
    int a[100],n,i;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    super(a,n) ? cout << "JESTE superrastuci !" : cout << "NIJE superrastuci !" ;
    return 0;
}
