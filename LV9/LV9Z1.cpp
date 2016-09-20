#include <iostream>
using namespace std;
template <typename Tip>
void Statistika(Tip a[], int n, int &br1, int &br2)
{
    br1=br2=0;
    int i;
    double AS=0.0;

    for (i=0; i<n; i++) AS+=a[i];
    AS/=(n*1.);

    for (i=0; i<n; i++)
    {
        if (a[i] < AS) br1++;
        else if (a[i] > AS) br2++;
    }
}
int main()
{
    double a[100];
    int b[100],i,n,br1,br2;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz realnih brojeva: ";
    for (i=0; i<n; i++) cin >> a[i];

    Statistika(a,n,br1,br2);

    cout << "Br1: " << br1 << endl;
    cout << "Br2: " << br2 << endl;

    cout << "\nUnesi n: "; cin >> n;
    cout << "Unesi niz cijelih brojeva: ";
    for (i=0; i<n; i++) cin >> b[i];

    Statistika(b,n,br1,br2);

    cout << "Br1: " << br1 << endl;
    cout << "Br2: " << br2 << endl;

    return 0;
}
