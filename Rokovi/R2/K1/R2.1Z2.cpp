#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,k,i;

    cout << "Unesi n,k: "; cin >> n >> k;

    for (i=1; i<=k; i++) cout << setw(i) << "*" << setw(n+2*k-2*i+1) << "*" << endl;
    for (i=0; i<n; i++) cout << setfill(' ') << setw(k) << "" << setfill('*') << setw(n) << "" << endl;
    for (i=k; i>=1; i--) cout << setfill(' ') << setw(i) << "*" << setw(n+2*k-2*i+1) << "*" << endl;

    return 0;
}
