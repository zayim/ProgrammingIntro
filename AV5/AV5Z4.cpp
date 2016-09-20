#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,gcd=0,a=0,b=0,tmp;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi n brojeva: ";

    while (n--)
    {
        cin >> a;

        while (gcd!=0)
        {
            tmp=a;
            a=gcd;
            gcd=tmp%gcd;
        }

        gcd=a;
    }

    cout << "NZD unesenih brojeva: " << gcd << endl;
    return 0;
}
