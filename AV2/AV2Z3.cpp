#include <iostream>
using namespace std;
int main()
{
    double x;

    cout << "Unesi realan broj: "; cin >> x;
    if (!x) cout << "Broj je nula !" << endl;
    else if (x>0) cout << "Broj je pozitivan !" << endl;
    else cout << "Broj je negativan !" << endl;

    return 0;
}
