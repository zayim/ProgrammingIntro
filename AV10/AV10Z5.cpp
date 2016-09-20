#include <iostream>
#include <algorithm>
using namespace std;
int f(int n)
{
    int cifre[20],i,bc=0,vrati=0;
    while (n)
    {
        cifre[bc++]=n%10;
        n/=10;
    }

    sort(cifre,cifre+bc);

    for (i=0; i<bc; i++) vrati=vrati*10+cifre[i];

    return vrati;
}
int main()
{
    int n;

    cout << "Unesi n: "; cin >> n;
    cout << "Trazeni broj: " << f(n) << endl;

    return 0;
}
