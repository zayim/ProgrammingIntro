#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int broj_dana,pocetni_dan,i;

    cout << "Broj dana:   "; cin >> broj_dana;
    cout << "Pocetni dan: "; cin >> pocetni_dan;
    pocetni_dan--;

    cout << "P  U  S  C  P  S  N  " << endl;

    cout << setw(3*pocetni_dan) << "";
    for (i=1; i<=broj_dana; i++)
    {
        cout << i << " ";
        if (i<10) cout << " ";
        if (/*i%7 == (7-pocetni_dan)%7*/ (i+pocetni_dan)%7==0) cout << endl;
    }
    return 0;
}
