#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a[100],n,i,j,tmp[100],z=0;
    bool prost;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi elemente niza: ";
    for (i=0; i<n; i++) cin >> a[i];

    for (i=0; i<n; i++)
    {
        prost=true;
        if (a[i]==1 || a[i]==2) prost = true;
        else if (a[i]%2==0) prost = false;
        else
        for (j=3; j<=int(sqrt(a[i])); j+=2)  if (a[i]%j==0) prost=false;

        if (prost) tmp[z++]=a[i];
    }

    cout << "Duzina novog niza: " << (n=z) << endl;
    cout << "Elementi novog niza: ";
    for (i=0; i<n; i++) cout << (a[i]=tmp[i]) << " ";
    cout << endl;

    return 0;
}
