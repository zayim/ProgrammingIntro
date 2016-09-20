#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double s=0.0,x;
    int n;

    cout << "Unesi x,n: "; cin >> x >> n;
    n++;

    while (n---1) s+=(n%2 ? -1.0 : 1.0)/(x*(x+1.0*n));

    cout << "Suma: " << s << endl;
    return 0;
}
