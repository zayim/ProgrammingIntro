#include <iostream>
#include <cmath>
using namespace std;
bool prijateljski(int a, int b)
{
    int za=1,zb=1,i;

    for (i=2; i<a; i++) if (!(a%i)) za+=i;
    for (i=2; i<b; i++) if (!(b%i)) zb+=i;

    return (a==zb && b==za);
}
int main()
{
    int a,b;

    cout << "Unesi a,b: "; cin >> a >> b;
    prijateljski(a,b) ? cout << "JESU prijateljski !" : cout << "NISU prijateljski !" ;

    return 0;
}
