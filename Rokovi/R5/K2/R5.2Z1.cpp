#include <iostream>
using namespace std;
int IzbaciNule (int n)
{
    int tmp=n,p=1,r=0;

    while (tmp) { p*=10; tmp/=10; }
    p/=10;

    while (n)
    {
        if (n/p) r=r*10 + (n/p);
        n%=p;
        p/=10;
    }

    return r;
}
int main()
{
    int n;

    cout << "Unesi n: "; cin >> n;
    while(n)
    {
        cout << "n bez nula: " << IzbaciNule(n) << endl << endl;
        cout << "Unesi n: ";
        cin >> n;
    }
    cout << "Unijeli ste 0, kraj programa !" << endl;

    return 0;
}
