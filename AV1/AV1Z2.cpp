#include <iostream>
using namespace std;
int main()
{
    int cvor;

    cout << "Unesi brzinu u cvorovima: "; cin >> cvor;
    cout << "Brzina u m/s: " << (cvor*1852.0/3600.0) << endl;

    return 0;
}
