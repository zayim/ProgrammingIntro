#include <iostream>
using namespace std;
int f(int n)
{
    if (n%2) return n;
    return f(n/2);
}
int main()
{
    int n;

    cout << "Unesi n: "; cin >> n;
    cout << "Najmanji neparni djelilac: " << f(n) << endl;

    return 0;
}
