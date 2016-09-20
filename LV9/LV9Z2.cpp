#include <iostream>
using namespace std;
template <typename tip>
inline tip abs(tip n) { return n<0 ? -n : n ; }

template <typename Tip>
void f(Tip a[], int n, int &ind)
{
    ind=0;
    Tip z1=0, z2=0, min;
    int i;

    for (i=1; i<n; i++) z2+=a[i];
    min=abs(z2);

    for (i=1; i<n; i++)
    {
        z1+=a[i-1];
        z2-=a[i];
        if (abs(z1-z2) < min) { min=abs(z1-z2); ind=i; }
    }
}
int main()
{
    int a[100],n,i,ind;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    f(a,n,ind);

    cout << "Trazeni indeks: " << ind << endl;

    return 0;
}
