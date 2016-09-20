#include <iostream>
using namespace std;
int gcd (int a, int b)
{
    if (b > a) swap(a,b);
    if (!b) return a;
    if (!(b-1)) return 1;
    return gcd (b,a%b);
}
void ZbirRazlomaka(int a1, int b1, int a2, int b2, int &a3, int &b3)
{
    int GCD;
    a3=a1*b2 +a2*b1;
    b3=b1*b2;
    GCD=gcd(a3,b3);
    a3/=GCD;
    b3/=GCD;
}
int main()
{
    int a1,b1,a2,b2,a3,b3;

    cout << "Unesi razlomke a1/b1, a2/b2: "; cin >> a1 >> b1 >> a2 >> b2;
    ZbirRazlomaka(a1,b1,a2,b2,a3,b3);
    cout << "Zbir razlomaka je: " << a3 << "/" << b3 << endl;

    return 0;
}
