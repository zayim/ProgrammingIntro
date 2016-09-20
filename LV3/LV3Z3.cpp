#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,i,j;

    cout << "Unesi n: "; cin >> n;

    cout << setw(n) << "*" << endl;

    i=0;
    while (++i<n-1)
    {
        cout << setw(n-i) << "*";
        cout << setw(i) << "*";
        cout << setw(i) << "*" << endl;
    }

    i=-1; while (++i<2*n-1) cout << "*"; cout << endl;

    i=n-1;
    while (--i>0)
    {
        cout << setw(n-i) << "*";
        cout << setw(i) << "*";
        cout << setw(i) << "*" << endl;
    }

    cout << setw(n) << "*" << endl;

    return 0;
}
