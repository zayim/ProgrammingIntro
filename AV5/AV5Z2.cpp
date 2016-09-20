#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,i,j;
    bool prost1,prost2;

    cout << "Unesi n: "; cin >> n;

    if (n<4) { cout << "Takva rastava ne postoji!" << endl; return 0; }

    prost1=true;
    if (n-4 && !(n%2)) prost1=false;
    else for (i=3; i<=sqrt(n-2); i+=2) if (!((n-2)%i)) { prost1=false; break; }

    if (prost1) { cout << "2+" << n-2 << "=" << n << endl; return 0;}

    i=3;
    while(i<=n/2)
    {
        prost1=true;
        for (j=3; j<=sqrt(i); j+=2) if (!(i%j)) { prost1=false; break; }

        if(prost1)
        {
            prost2=true;
            if (!((n-i)%2)) prost2=false;
            for (j=3; j<=sqrt(n-i); j+=2) if (!((n-i)%j)) { prost2=false; break; }
            if(prost2)
            {
                cout << i << "+" << n-i << "=" << n << endl;
                return 0;
            }

        }
        i+=2;
    }

    cout << "Takva rastava ne postoji!" << endl;

    return 0;
}

