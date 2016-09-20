#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,i=0;

    cout << "Unesi n: "; cin >> n;
    while (i++<n) cout << setw(n-i) << "" << setfill('*') << setw(2*i-1) << "" << setfill(' ') << setw(n-i) << "\n";
    return 0;
}
