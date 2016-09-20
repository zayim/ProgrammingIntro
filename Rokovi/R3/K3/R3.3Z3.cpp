#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,i,j,k,z=0,a[100][100],b[100][100];

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi prvu  matricu: " << endl;
    for (i=0; i<n; i++)
    for (j=0; j<n; j++) cin >> a[i][j];
    cout << "Unesi drugu matricu: " << endl;
    for (i=0; i<n; i++)
    for (j=0; j<n; j++) cin >> b[i][j];

    cout << "Produkt matrica: " << endl;

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            z=0;
            for (k=0; k<n; k++) z+=a[i][k]*b[k][j];
            cout << setw(5) << z;
        }
        cout << endl;
    }

    return 0;
}
