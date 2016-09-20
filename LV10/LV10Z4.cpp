#include <iostream>
#include <ctime>
using namespace std;
int FibIter(int n)
{
    int f1=1,f2=1;
    while (n---2)
    {
        f2=f2+f1;
        f1=f2-f1;
    }
    return f2;
}

int counterFibRekBrza=0;
int FibRekBrza(int n)
{
    counterFibRekBrza++;
    static int m[1000]={};

    if (m[n]) return m[n];
    if (n<3) return m[n]=1;
    return m[n]=FibRekBrza(n-1)+FibRekBrza(n-2);
}

int counterFibRek=0;
int FibRek(int n)
{
    counterFibRek++;
    if (n==1 || n==2) return 1;
    return FibRek(n-1) + FibRek(n-2);
}

int main()
{
    int n,fn;
    int PocetakFibRek,KrajFibRek;
    int PocetakFibRekBrza,KrajFibRekBrza;
    int PocetakFibIter,KrajFibIter;

    cout << "Unesi n: "; cin >> n;

    PocetakFibIter=clock();
    fn=FibIter(n);
    KrajFibIter=clock();
    cout << "\nITERATIVNO\nFn: " << fn << "   Vrijeme izvrsavanja: " << double((KrajFibIter - PocetakFibIter)/1000.) << "s" << endl;

    PocetakFibRekBrza=clock();
    fn=FibRekBrza(n);
    KrajFibRekBrza=clock();
    cout << "\nREKURZIJA BRZA\nFn: " << fn << "   Vrijeme izvrsavanja: " << double((KrajFibRekBrza - PocetakFibRekBrza)/1000.) << "s   Broj poziva: " << counterFibRekBrza  << endl;

    PocetakFibRek=clock();
    fn=FibRek(n);
    KrajFibRek=clock();
    cout << "\nREKURZIJA\nFn: " << fn << "   Vrijeme izvrsavanja: " << double((KrajFibRek - PocetakFibRek)/1000.) << "s   Broj poziva: " << counterFibRek  << endl;

    return 0;
}
