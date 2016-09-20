#include <iostream>
using namespace std;
int main()
{
    int a[1000],n,i,j,k;
    bool periodican=false;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    for (i=1; i<=n/2; i++)
    {
        periodican=true;
        for (j=1; j<=(n-1)/i; j++)
        for (k=j*i; k<(j+1)*i; k++)
        if (a[k]!=a[k-j*i]) periodican=false;

        if (periodican)
        {
            cout << "Niz je periodican s periodom " << i << " !" << endl;
            return 0;
        }

    }

    cout << "Niz nije periodican !" << endl;

    return 0;
}
