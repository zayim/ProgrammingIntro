#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x,z=0.0,p=1.0;
    int n=0;

    cout << "Unesi realne brojeve (0 za kraj): ";

    cin >> x;
    if (x==0) { cout << "Niste unijeli nijedan broj!" << endl; return 0; }
    while (x!=0)
    {
        p*=x;
        z+=x;
        cin >> x;
        n++;
    }

    cout << "Aritmeticka  sredina: " << z/(n*1.0) << endl;
    cout << "Geometrijska sredina: " << pow(p,(1.0/n)) << endl;

    return 0;
}
