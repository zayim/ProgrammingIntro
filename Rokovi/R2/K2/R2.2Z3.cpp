#include <iostream>
using namespace std;
template <typename Tip>
void Transformacije (Tip a[], Tip b[], int n, Tip &x, Tip &y)
{
    x=y=b[n-1]-a[n-1];

    while (n--)
    {
        b[n]-=a[n];
        x=max(x,b[n]);
        y=min(y,b[n]);
    }
}
int main()
{
    int a[100],b[100],n,i,x,y;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz A: ";
    for (i=0; i<n; i++) cin >> a[i];
    cout << "Unesi niz B: ";
    for (i=0; i<n; i++) cin >> b[i];

    Transformacije(a,b,n,x,y);

    cout << "Novi niz B: ";
    for (i=0; i<n; i++) cout << b[i] << " ";

    cout << endl << "Najveci  element niza B: " << x << endl;
    cout << "Najmanji element niza B: " << y << endl;

    return 0;
}
