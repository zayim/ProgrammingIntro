#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x,xmax,deltax,Tn;
    int i,j,n,factorial;

    cout << "Unesi n, xmin, xmax, delta_x: "; cin >> n >> x >> xmax >> deltax;

    cout << endl;
    cout << "     x       f(x)     Tn(x)" << endl;
    cout << "---------------------------" << endl;
    while (x<=xmax)
    {
        Tn=0.0;
        for (i=0; i<=n; i++)
        {
            factorial=1;
            for (j=2; j<=(2*i+1); j++) factorial*=j;
            Tn+=(i%2 ? -1.0 : 1.0)*pow(x,2.0*i+1.0)/(factorial*1.0);
        }
        cout << setprecision(5) << setw(6) << x << setw(11) << sin(x) << setw(10) << Tn << endl;
        x+=deltax;
    }

    return 0;
}
