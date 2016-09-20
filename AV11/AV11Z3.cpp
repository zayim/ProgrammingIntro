#include <iostream>
#include <vector>
using namespace std;
vector<int> f(int a[], int n, int b[])
{
    int i,j=0;
    vector<int> v;

    for (i=0; i<n; i++)
        if (!(a[i]%2)) { b[j++]=a[i]; v.push_back(a[i]); }

    for (i=0; i<n; i++)
        if (a[i]%2) { b[j++]=a[i]; v.push_back(a[i]); }

    return v;
}
int main()
{
    int a[100],n,i,b[100];
    vector<int> v;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    v=f(a,n,b);

    cout << "Novi niz: ";
    for (i=0; i<n; i++) cout << b[i] << " ";
    cout << "\nVektor: ";
    for (i=0; i<n; i++) cout << v[i] << " ";

    return 0;
}
