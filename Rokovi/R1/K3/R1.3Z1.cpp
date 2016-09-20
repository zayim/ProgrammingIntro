#include <iostream>
using namespace std;
int SumaCifara(int n)
{
    if (n<10) return n;
    return SumaCifara(n/10) + n%10;
}
int main()
{
    int n;

    cout << "Unesi n: "; cin >> n;
    while (n>=0)
    {
        cout << "Suma cifara: " << SumaCifara(n) << endl << endl;
        cout << "Unesi n: "; cin >> n;
    }
    cout << "Unijeli ste negativan broj, kraj programa !" << endl;

    return 0;
}
