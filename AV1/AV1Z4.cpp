#include <iostream>
#include <cmath>
#define PI 4*atan(1)
using namespace std;
int main()
{
    double a,b,gamma;

    cout << "Unesi stranice a,b i ugao gama: "; cin >> a >> b >> gamma;
    gamma*=PI/180;
    cout << "Duzina stranice c je: " << sqrt(a*a + b*b - 2.0*a*b*cos(gamma)) << endl;

    return 0;
}
