#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i,j,m,n;

    cout << "Unesi m,n: "; cin >> m >> n;

    for (i=0; i<(n+1)/2; i++)
    {
        for (j=0; j<i; j++) cout << char('A'+j);
        cout << setfill(char('A'+i)) << setw(m-2*i) << "";
        for (j=i-1; j>=0; j--) cout << char('A'+j);
        cout << endl;
    }
    for (i=n/2-1; i>=0; i--)
    {
        for (j=0; j<i; j++) cout << char('A'+j);
        cout << setfill(char('A'+i)) << setw(m-2*i) << "";
        for (j=i-1; j>=0; j--) cout << char('A'+j);
        cout << endl;
    }

    return 0;
}
