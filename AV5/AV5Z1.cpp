#include <iostream>
using namespace std;
int main()
{
    int n;
    double z=0.0;

    cout << "Unesi n: "; cin >> n;
    do z=1.0/(z+n*1.0); while (n---1);
    cout << "Rezultat: " << z << endl;

    return 0;
}
