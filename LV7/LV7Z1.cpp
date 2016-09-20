#include <iostream>
using namespace std;
inline int abs(int n) { return n<0 ? -n : n ; }
int main()
{
    int m,n,p,q,i,j;
    bool napad1,napad2;

    cout << "Unesi prvu  poziciju (m,n): "; cin >> m >> n;
    cout << "Unesi drugu poziciju (p,q): "; cin >> p >> q;

    for (i=1; i<=8; i++)
    {
        for (j=1; j<=8; j++)
        {
            if ((i==m && j==n) || (i==p && j==q)) cout << "k ";
            else
            {
                napad1 = i==m || j==n || abs(i-m)==abs(j-n);
                napad2 = i==p || j==q || abs(i-p)==abs(j-q);

                if (napad1 && !napad2) cout << "* ";
                else cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}
