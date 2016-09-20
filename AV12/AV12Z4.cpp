#include <iostream>
using namespace std;
int g(int n)
{
    if (n<10) return 1;
    return 10*g(n/10);
}
int f(int n)
{
    if (n<10) return n;
    return (f(n/10)+(n%10)*g(n));
}
int main()
{
    int n;

    cout << "Unesi n: "; cin >> n;
    cout << "Obrnuti broj: " << f(n) << endl;

    return 0;
}
