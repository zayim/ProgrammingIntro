#include <iostream>
using namespace std;
void AnalizirajBroj(int n, int &suma, int &bp, int &bn)
{
    suma=bn=bp=0;
    while (n)
    {
        suma+=n%10;
        (n%10)%2 ? bn++ : bp++ ;
        n/=10;
    }
}
int main()
{
    int n,suma,bp,bn;

    cout << "Unesi n: "; cin >> n;
    while(n)
    {
        AnalizirajBroj(n,suma,bp,bn);
        cout << "Suma cifara: " << suma << "\nBroj parnih cifara: " << bp << "\nBroj neparnih cifara: " << bn;
        cout << "\nUnesi n: "; cin >> n;
    }
    cout << "Unijeli ste 0, kraj programa !";

    return 0;
}
