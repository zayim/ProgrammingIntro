#include <iostream>
#include <cmath>
#define PI 3.14159265358979
using namespace std;
int main()
{
    double x,y,ro,phi;

    cout << "Unesi koordinate tacke: "; cin >> x >> y;

    ro=sqrt(x*x + y*y);

    if (x>0) phi=atan(y/x);
    else if (x<0) phi=PI+atan(y/x);
    else if (x==0 && y>0) phi=PI/2.0;
    else if (x==0 && y<0) phi=PI/-2.0;

    if (phi<0) phi+=2*PI;

    cout << "Ugao:     " << phi*180.0/PI << endl;
    cout << "Argument: " << ro << endl;

    return 0;
}
