#include <iostream>
#include <algorithm>
using namespace std;
int f(double a[], int na, double b[], int nb, double c[], int &nc)
{
    nc=0;
    int i,j;
    bool x;

    for (i=0; i<na; i++)
    {
        x=false;
        for (j=0; j<nb; j++)
            if (a[i]==b[j]) { x=true; break; }

        if (x)
        {
            x=false;
            for (j=0; j<nc; j++)
                if (a[i]==c[j]) { x=true; break; }
            if (!x) c[nc++]=a[i];
        }
    }
}
int main()
{
    int na,nb,nc,i;
    double a[100],b[100],c[100];

    cout << "Unesi n1: "; cin >> na;
    cout << "Unesi niz1: ";
    for (i=0; i<na; i++) cin >> a[i];
    cout << "Unesi n2: "; cin >> nb;
    cout << "Unesi niz2: ";
    for (i=0; i<na; i++) cin >> b[i];

    f(a,na,b,nb,c,nc);

    cout << "n3: " << nc << endl;
    cout << "niz3: ";
    for (i=0; i<nc; i++) cout << c[i] << " ";

    return 0;
}
