#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n1,n2,z=0,i;

    cout << "Unesi n1,n2: "; cin >> n1 >> n2;

    cout << endl << "   n1 || n2" << endl;
    cout << "==============" << endl;
    if (n1 > n2) swap(n1,n2);
    do
    {
        z=n1+1;
        for (i=2; i<=n1/2; i++) z+=(n1%i ? 0 : i);
        cout << setw(5) << n1 << " || " << z << endl;

    }while (++n1<=n2);

    return 0;
}
