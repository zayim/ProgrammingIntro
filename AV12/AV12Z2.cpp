#include <iostream>
using namespace std;
int broj_cifara(int n)
{
    if (n<10) return 1;
    return (broj_cifara(n/10) + 1);
}
int main()
{
    int n;

    cout << "Unesi n: "; cin >> n;
    cout << "Broj cifara: " << broj_cifara(n) << endl;

    return 0;
}
