#include <iostream>
#include <cmath>
using namespace std;
void Sredine(int n, double &AS, double &GS)
{
    int z=0,p=1,bc=0;
    while (n)
    {
        z+=(n%10);
        p*=(n%10);
        n/=10;
        bc++;
    }
    AS=(z*1.)/(bc*1.);
    GS=pow(p*1.,1./(bc*1.));
}
int main()
{
    int n;
    double as,gs;

    cout << "Unesi n: "; cin >> n;
    while(n)
    {
        Sredine(n,as,gs);
        cout << "Aritm. sredina cifara: " << as << endl;
        cout << "Geom.  sredina cifara: " << gs << endl << endl;
        cout << "Unesi n: "; cin >> n;
    }
    cout << "Unijeli ste 0, kraj programa !";

    return 0;
}
