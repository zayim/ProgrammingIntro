#include <iostream>
using namespace std;
int main()
{
    float z=0.0,suma=0.0,x;
    int n;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi n realnih brojeva: ";
    while (n--)
    {
        cin >> x;
        z+=x;
        suma+=1.0/z;
    }
    cout << "Trazena suma: " << suma << endl;

    return 0;
}
