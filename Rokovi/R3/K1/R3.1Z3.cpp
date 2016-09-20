#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int z=0,n,i=3,j;
    bool prost;

    cout << "Unesi n: "; cin >> n;

    cout << "Prvih n parova blizanaca: ";
    while (z<n)
    {
        prost=true;
        for (j=3; j<=int(sqrt(i)); j++) if (!(i%j)) { prost=false; break; }

        if (prost)
        {
            for (j=3; j<=int(sqrt(i+2)); j++) if (!((i+2)%j)) { prost=false; break; }
            if (prost) { cout << "(" << i << "," << i+2 << ") "; z++; }
        }
        i+=2;
    }

    return 0;
}
