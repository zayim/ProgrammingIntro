#include <iostream>
#include <cmath>
using namespace std;
double stepen(int x, int n)
{
    int p=1,i;
    if (n<0)
    {
        while (n++) p*=x;
        return 1./p;
    }
    else
    {
        while (n--) p*=x;
        return p;
    }
}
int main()
{
    int x,n;

    cout << "Unesi x i n: "; cin >> x >> n;
    cout << "x^n = " << stepen(x,n);

    return 0;
}
