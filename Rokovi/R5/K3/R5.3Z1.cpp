#include <iostream>
using namespace std;
int f(int n)
{
    if (n<10) return (n+1)%10;
    return f(n/10)*10 + (n+1)%10;
}
int main()
{
    int n;

    cout << "Unesi n: "; cin >> n;
    while(n)
    {
        cout << "Promijenjeni broj: " << f(n);
        cout << "\nUnesi n: "; cin >> n;
    }
    cout << "Unijeli ste 0, kraj programa !";

    return 0;
}
