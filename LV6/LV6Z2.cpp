#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    double a[100],A_sr=0.0;
    int n,i,j;
    bool kraj;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++)
    {
        cin >> a[i];
        A_sr+=a[i];
    }
    A_sr/=(1.0*n);

    i=-1;
    while (++i<n && !kraj)
        if (a[i] > A_sr)
        {
            kraj=true;;
            for (j=i+1; j<n; j++)
                if (a[j] <= A_sr)
                {
                    swap(a[i],a[j]);
                    kraj=false;
                    break;
                }
        }

    n=i-1;
    cout << "Velicina novog niza: " << n << endl;
    cout << "Novi niz: ";
    for (i=0; i<n; i++) cout << a[i] << " ";

    return 0;
}
