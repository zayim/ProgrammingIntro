#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int m,n,i;

    cout << "Unesi m,n: "; cin >> m >> n;

    cout << setfill('*') << setw(m) << "" << endl;
    cout << setfill(' ');
    for (i=1; i<=(n-1)/2; i++)  cout << setw(i+1) << "*" << setw(m-2*i) << "*\n";
    for (i=(n-3)/2; i>=1; i--)  cout << setw(i+1) << "*" << setw(m-2*i) << "*\n";
    cout << setfill('*') << setw(m) << "" << endl;

    return 0;
}
