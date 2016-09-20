#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x,n;

    cout << "Unesi prirodne brojeve x,n: "; cin >> x >> n;
    cout << "1/x na n decimala je: " << fixed << setprecision(n) << (1.0/x) << endl;

    return 0;
}
