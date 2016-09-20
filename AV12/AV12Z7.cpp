#include <iostream>
using namespace std;
long binomial(long n, long k)
{
    k= k<n/2 ? k : n-k ;
    if (!k) return 1;
    if (!n) return 0;
    return binomial(n-1,k-1) + binomial(n-1,k);
}
int main()
{
    long n,k;

    cout << "Unesi N i K: "; cin >> n >> k;
    cout << "N nad K je: " << binomial(n,k) << endl;

    return 0;
}
