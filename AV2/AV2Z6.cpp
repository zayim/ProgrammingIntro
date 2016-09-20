#include <iostream>
using namespace std;
int main()
{
    double a,b,c;
    bool mogu;

    cout << "Unesi a,b,c: "; cin >> a >> b >> c;

    if (a<=0 || b<=0 || c<=0) mogu=false;
    else if (a*a + b*b - c*c < 1e-10) mogu=true;
    else if (b*b + c*c - a*a < 1e-10) mogu=true;
    else if (a*a + c*c - b*b < 1e-10) mogu=true;
    else mogu=false;

    if (mogu) cout << "Brojevi MOGU biti duzine stranica pravouglog trougla !";
    else cout << "Brojevi NE MOGU biti duzine stranica pravouglog trougla!";
    return 0;
}
