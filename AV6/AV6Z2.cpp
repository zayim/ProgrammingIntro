#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[100]={},i,j,n;
    a[0]=1;

    cout << "Unesi n: "; cin >> n;

    for (i=0; i<n; i++)
    {
        for (j=i; j>0; j--)
        {
            a[j]+=a[j-1];
            cout << setw(3) << a[j] << " ";
        }
        cout << setw(3) << a[0] << " " << endl;
    }

    return 0;
}
