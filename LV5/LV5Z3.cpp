#include <iostream>
using namespace std;
int main()
{
    int n,p=1,tmp;

    cout << "Unesi n: "; cin >> n;
    tmp=n;
    while (tmp) { p*=10; tmp/=10;} p/=10;
    while (n)
    {
        if (n/p != n%10) { cout << "Nije palindrom!" << endl; return 0; }
        n%=p;
        n/=10;
        p/=100;

    }
    cout << "Jest palindrom!" << endl;

    return 0;
}
