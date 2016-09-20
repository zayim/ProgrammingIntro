#include <iostream>
#include <cmath>
using namespace std;
double korijen (double x)
{
    double tmp1=1.0,tmp2=1.0;

    do
    {
        tmp1=tmp2;
        tmp2=(tmp1 + x/tmp1)/2.0;
    } while (fabs(tmp1-tmp2) > 1e-15);

    return tmp2;
}
int main()
{
    double x;

    cout << "Unesi x: "; cin >> x;

    cout << "korijen(x): " << korijen(x) << endl;
    cout << "   sqrt(x): " << sqrt(x) << endl;

    return 0;
}
