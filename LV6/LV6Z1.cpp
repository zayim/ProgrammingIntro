#include <iostream>
using namespace std;
int main()
{
    int a[100],b[100],tmp[100],z=0,m,n,i,j;
    bool ima=false;

    cout << "Unesi m: "; cin >> m;
    cout << "Unesi elemente niza A: ";
    for (i=0; i<m; i++) cin >> a[i];

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi elemente niza B: ";
    for (i=0; i<n; i++) cin >> b[i];

    for (i=0; i<m; i++)
    {
        ima=false;
        for (j=0; j<z; j++)
            if (a[i]==tmp[j])
            {
                ima=true;
                break;
            }

        if (!ima)
        {
            for (j=0; j<n; j++)
                if (a[i]==b[j])
                {
                    tmp[z++]=a[i];
                    break;
                }
        }

    }

    cout << "Elemenata koji se ponavljaju ima: " << z << endl;
    cout << "To su: ";
    for (i=0; i<z; i++) cout << tmp[i] << " ";

    return 0;
}
