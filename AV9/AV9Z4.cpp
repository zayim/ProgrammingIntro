#include <iostream>
#include <cmath>
using namespace std;
int OdstraniCifre(int a, int n)
{
    int p=1,z=0;

    if (a<0) return 0;

    while (a)
    {
        if (a%10 <= n)
        {
            z+=(a%10)*p;
            p*=10;
        }
        a/=10;
    }

    return z;
}
int main()
{
    int a,n;

    cout << "Unesi a i n: "; cin >> a >> n;
    cout << "Modifikovani broj: " << OdstraniCifre(a,n) << endl;

    return 0;
}
