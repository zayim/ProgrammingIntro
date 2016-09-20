#include <iostream>
using namespace std;
int main()
{
    int x;

    cout << "Unesi x: "; cin >> x;
    cout << "f(x) = ";

    if (x<=0) cout << 0;
    else if (x<=3) cout << (x*x);
    else if (x<=5) cout << 1;
    else cout << (x*x - 6*x + 9);

    return 0;
}
