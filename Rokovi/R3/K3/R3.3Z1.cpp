#include <iostream>
using namespace std;
double harmonic(int n)
{
    if (n==1) return 1.;
    return harmonic(n-1) + 1./n;
}
int main()
{
    int n;

    cout << "Unesi n: "; cin >> n;
    cout << "Suma: " << harmonic(n) << endl;

    return 0;
}


