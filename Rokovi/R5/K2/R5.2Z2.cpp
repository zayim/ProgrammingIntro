#include <iostream>
using namespace std;
int sum(int n)
{
    int z=0;
    while (n) { z+=n%10; n/=10; }
    return z;
}
void f(int a[], int n, int &maxsum, int &minsum)
{
    int i,max,min;

    max=min=sum(a[0]);
    maxsum=minsum=a[0];
    for (i=1; i<n; i++)
    {
        if (min > sum(a[i])) { min=sum(a[i]); minsum=a[i]; }
        if (max < sum(a[i])) { max=sum(a[i]); maxsum=a[i]; }
    }
}
int main()
{
    int a[100],n,i,maxs,mins;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi elemente niza: ";
    for (i=0; i<n; i++) cin >> a[i];

    f(a,n,maxs,mins);

    cout << "Broj sa najvecom  sumom cifara: " << maxs << endl;
    cout << "Broj sa najmanjom sumom cifara: " << mins << endl;

    return 0;
}
