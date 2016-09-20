#include <iostream>
using namespace std;
void IzbaciNule (int &a)
{
    int tmp=a,p=1,r=0;

    while (tmp) { p*=10; tmp/=10; }
    p/=10;

    while (a)
    {
        if (a/p) r=r*10 + (a/p);
        a%=p;
        p/=10;
    }

    a=r;
}
int main()
{
    int n;

    cout << "Unesi n: "; cin >> n;
    while(n)
    {
        IzbaciNule(n);
        cout << "n bez nula: " << n << endl;
        cout << "Unesi n: ";
        cin >> n;
    }
    cout << "Unijeli ste 0, kraj programa !" << endl;

    return 0;
}
