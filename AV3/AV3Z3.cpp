#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,m;
    cout << "Unesi n,m: "; cin >> n >> m;

    cout << setfill('*') << setw(n) << "" << endl;
    while (m-- -2) cout << "*" << setfill(' ') << setw(n-1) << "*" << endl;
    cout << setfill('*') << setw(n) << "" << endl;

    return 0;
}
