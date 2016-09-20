#include <iostream>
using namespace std;
long Sigma(long n)
{
    long sigma=0,i=3;

    if (n==1) return 0;

    while (!(n%2)) { n/=2; sigma+=2; }
    while (n!=1)
    {
        while (!(n%i)) { n/=i; sigma+=i; };
        i+=2;
    }

    return sigma;
}
int main()
{
    int n;

    cout << "Unesi n:  "; cin >> n;
    while(n)
    {
        cout << "Sigma(n): " << Sigma(n) << endl << endl;
        cout << "Unesi n:  "; cin >> n;
    }
    cout << "Unijeli ste 0, kraj programa !" << endl;

    return 0;
}
