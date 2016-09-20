#include <iostream>
using namespace std;
int main()
{
    int n;
    double z=0.0,x;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi n realnih brojeva: ";
    while (n--)
    {
        cin >> x;
        z+=x;
    }

    cout << "Zbir je: " << z << endl;
    return 0;
}
