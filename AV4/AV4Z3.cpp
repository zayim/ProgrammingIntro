#include <iostream>
using namespace std;
int main()
{
    int n,i,j,p=1,tmp;

    cout << "Unesi n: "; cin >> n;

    tmp=n;
    while (tmp)
    {
        p*=10;
        tmp/=10;
    }
    p/=10;

    cout << "n bez nula: ";
    while (n)
    {
        if (n/p) cout << (n/p);
        n%=p;
        p/=10;
    }

    return 0;
}
