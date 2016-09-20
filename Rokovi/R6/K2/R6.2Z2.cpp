#include <iostream>
using namespace std;
void RotirajUlijevo(int a[],int n)
{
    int tmp=a[0];
    while (n) swap(tmp,a[n---1]);
}
int main()
{
    int a[100],n,i;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    RotirajUlijevo(a,n);
    cout << "Rotiran niz: ";
    for (i=0; i<n; i++) cout << a[i] << " ";

    return 0;
}
