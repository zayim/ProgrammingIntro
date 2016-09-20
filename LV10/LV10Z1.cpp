#include <iostream>
using namespace std;
int SumaKubova(int n)
{
    if (n==1) return 1;
    return SumaKubova(n-1) + n*n*n;
}
int SumaCifara(int n)
{
    if (n<10) return n;
    return SumaCifara(n/10) + n%10;
}
double Stepen(double x, int n)
{
    if (!n) return 1;
    if (n<0) return Stepen(x,n+1)/x;
    return Stepen(x,n-1)*x;
}
int NZD(int a, int b)
{
    if (!b) return a;
    return NZD(b,a%b);
}
int main()
{
    int n,a,b;
    double x;

    cout << "Unesi n: "; cin >> n;
    cout << "Suma kubova: " << SumaKubova(n) << endl << endl;

    cout << "Unesi n: "; cin >> n;
    cout << "Suma cifara: " << SumaCifara(n) << endl << endl;

    cout << "Unesi x,n: "; cin >> x >> n;
    cout << "x^n: " << Stepen(x,n) << endl << endl;

    cout << "Unesi a,b: "; cin >> a >> b;
    cout << "NZD(a,b): " << NZD(a,b) << endl;

    return 0;
}
