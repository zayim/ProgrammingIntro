#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int m,n,tmp,gcd,lcs;

    cout << "Unesi m,n: "; cin >> m >> n;
    lcs=n*m;

    while (n!=0)
    {
        tmp=m;
        m=n;
        n=tmp%n;
    }
    gcd=m;
    lcs/=gcd;

    cout << "NZD(m,n): " << gcd << endl;
    cout << "NZS(m,n): " << lcs << endl;

    return 0;
}
