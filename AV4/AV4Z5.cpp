#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,i=3;
    bool prost=true;

    cout << "Unesi n: "; cin >> n;

    if (n==1) { cout << "1 nije ni prost ni slozen !"; return 0; }
    prost=true;
    if (n-2 && !(n%2)) prost=false;
    else
    {
        while (i<=int(sqrt(n)))
        {
            if (n%i==0) { prost=false; break; }
            i+=2;
        }
    }

    prost ? cout << "Broj je PROST!" : cout << "Broj je SLOZEN!" ;
    return 0;
}
