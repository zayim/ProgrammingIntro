#include <iostream>
using namespace std;
int main()
{
    int n,a[100],i,ip,in;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    ip=n; while (a[--ip]%2);
    in=n; while (!(a[--in]%2));

    for (i=0; i<n; i++)
        if (!(a[i]%2))
        {
            cout << a[i];
            if (i-ip) cout << ", ";
        }

    cout << endl;
    for (i=0; i<n; i++)
         if (a[i]%2)
        {
            cout << a[i];
            if (i-in) cout << ", ";
        }

    return 0;
}
