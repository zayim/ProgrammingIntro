#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,i,j;

    cout << "Unesi n: "; cin >> n;

    for (i=1; i<=n; i++)
    {
        cout << setw(n-i) << "";
        for (j=i; j>=1; j--) cout << char('A'+j-1);
        for (j=1; j<i; j++) cout << char('A'+j);
        cout << endl;
    }
    return 0;
}
