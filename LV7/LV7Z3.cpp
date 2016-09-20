#include <iostream>
#include <iomanip>
using namespace std;
void Trougao (int visina, char znak1, char znak2='*')
{
    int i;

    cout << setw(visina) << znak1 << endl;

    for (i=1; i<visina-1; i++)
    {
        cout << setw(visina-i) << znak1;
        cout << setw(i) << znak2;
        cout << setw(i) << znak1 << endl;
    }

    cout << setfill(znak1) << setw(2*visina-1) << "" << endl;
}
int main()
{
    int h;
    char z1,z2;

    cout << "Unesi visinu:  "; cin >> h;
    cout << "Unesi znakove: "; cin >> z1 >> z2;

    Trougao(h,z1,z2);

    return 0;
}
