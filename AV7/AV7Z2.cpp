#include <iostream>
using namespace std;
int main()
{
    int i=0,j=0,n,m,z=-1,br=0;
    bool izbacen[100]={};

    cout << "Unesi n i m: "; cin >> n >> m;

    cout << "Redoslijed izbacivanja: ";
    while (++z!=n)
    {
        br=0;
        while(br<m)
        {
            if (!izbacen[i]) br++;
            i=(i+1)%n;
        }
        if (i==0) { izbacen[n-1]=true; cout << n << " "; }
        else { izbacen[i-1]=true; cout << i << " "; }
    }

    return 0;
}
