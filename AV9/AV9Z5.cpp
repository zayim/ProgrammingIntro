#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
enum Mjeseci {Januar, Februar, Mart, April, Maj, Juni, Juli, August, Septembar, Oktobar, Novembar, Decembar};
enum Dani {Ponedjeljak, Utorak, Srijeda, Cetvrtak, Petak, Subota, Nedjelja };
void StampajKalendar(Mjeseci mjesec, Dani pocetni_dan, bool prestupna=false)
{
    int broj_dana[]={31,28,31,30,31,30,31,31,30,31,30,31},i;
    if (prestupna) broj_dana[1]++;

    cout << "P  U  S  C  P  S  N  " << endl;

    cout << setw(3*pocetni_dan) << "";
    for (i=1; i<=broj_dana[mjesec]; i++)
    {
        cout << i << " ";
        if (i<10) cout << " ";
        if (i%7 == (7-pocetni_dan)%7) cout << endl;
    }
}
int main()
{
    StampajKalendar(Februar,Srijeda,true);
    return 0;
}
