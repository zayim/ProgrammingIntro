#include <iostream>
using namespace std;
int nzd(int a[], int n)
{
    int i,tmp1=0,tmp=0,gcd=0;

    for (i=0; i<n; i++)
    {
        tmp=a[i];
        while (tmp!=0)
        {
            tmp1=gcd;
            gcd=tmp;
            tmp=tmp1%tmp;
        }
    }
    return gcd;
}
int main()
{
    int a[100],n,i;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    cout << "NZD niza: " << nzd(a,n) << endl;

    return 0;
}
