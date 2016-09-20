#include <iostream>
using namespace std;
long long fakt(long long n)
{
    long long i,f=n;
    for (i=2; i<n; i++) f*=i;
    return f;
}
long long fakt_rekurzija(long long n)
{
    if (!(n-1)) return 1;
    return n*fakt_rekurzija(n-1);
}
int main()
{
    long long n;

    cout << "Unesi n: "; cin >> n;
    cout << "Faktorijel bez rekurzije: " << fakt(n) << endl;
    cout << "Faktorijel sa rekurzijom: " << fakt_rekurzija(n) << endl;

    return 0;
}
