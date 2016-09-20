#include <iostream>
using namespace std;
int Suma(int a[], int n, int &sp, int &sn)
{
    sp=sn=0;
    int i,bp=0,bn=0;

    for (i=0; i<n; i++)
    {
        if (a[i]%2) { bn++; sn+=a[i]; }
        else { bp++; sp+=a[i]; }
    }

    return (bp-bn);
}
int main()
{
    int n,i,a[100],sp,sn,r;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    r=Suma(a,n,sp,sn);

    cout << "Suma parnih:   " << sp << endl;
    cout << "Suma neparnih: " << sn << endl;
    cout << "Razlika:       " << r << endl;

    return 0;
}
