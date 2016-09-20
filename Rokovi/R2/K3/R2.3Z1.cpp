#include <iostream>
using namespace std;
double A_sr2(int a[], int n)
{
    static int n_tmp=n;
    if (n==1) return (a[0]*1./n_tmp);
    return (A_sr2(a,n-1)+a[n-1]*1./n_tmp);
}
double A_sr(int a[], int n)
{
    if (n==1) return (a[0]);
    return (A_sr(a,n-1)*(n-1) +a[n-1])/n;
}
int main()
{
    int i,a[100],n;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    cout << "Aritmeticka sredina: " << A_sr(a,n) << endl;

    return 0;
}

