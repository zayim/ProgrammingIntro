#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char x[10]="+-----";
    int i=0,j,n;

    cout << "Unesi n: "; cin >> n;

    while (++i<=n)
    {
        j=-1; while (++j<n) cout << x;
        cout << "+" << endl;

        j=0; while (++j<=n) cout << "|" << setw(5) << (i*j);
        cout << "|" << endl;
    }

    i=-1; while (++i<n) cout << x;
    cout << "+" << endl;

    return 0;
}
