#include <iostream>
using namespace std;
int main()
{
    double a1,b1,c1,a2,b2,c2,Dx,Dy,D;

    cout << "Unesi koeficijente sistema...\n";
    cout << "a1,b1,c1: "; cin >> a1 >> b1 >> c1;
    cout << "a2,b2,c2: "; cin >> a2 >> b2 >> c2;

    cout << "Rjesenje\nx = " << ((-1.0*c1*b2+b1*c2)/(a1*b2-a2*b1)) << endl;
    cout << "y = " << ((-1.0*a1*c2+a2*c1)/(a1*b2-a2*b1)) << endl;
    return 0;
}
