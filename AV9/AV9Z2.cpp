#include <iostream>
#include <cmath>
using namespace std;
bool DaLiSuPrijateljski(int a, int b)
{
    int za=1,zb=1,i;

    for (i=2; i<a; i++) if (a%i==0) za+=i;
    for (i=2; i<b; i++) if (b%i==0) zb+=i;

    return (a==zb && b==za);
}
int main()
{
    int a,b,c,i;

    cout << "Unesi a,b,c: "; cin >> a >> b >> c;

    cout << "Trazeni brojevi: ";
    for (i=a; i<=b; i++)
    if (DaLiSuPrijateljski(i,c)) cout << i << " ";

    return 0;
}
