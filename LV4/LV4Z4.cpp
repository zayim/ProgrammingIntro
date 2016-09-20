#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,i,z=0,korijen;

    cout << "Unesi n: "; cin >> n;
    cout << "Faktorizacija broja n: ";

    while (!(n%2)) { n/=2; z++; }
    if (z) cout << "{2," << z << "} ";

    i=3;
    while (n!=1)
    {
        z=0;
        while (!(n%i)) { n/=i; z++; };
        if (z) cout << "{" << i << "," << z << "} ";
        i+=2;
    }

    return 0;
}
