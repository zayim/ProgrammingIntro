#include <iostream>
#include <cmath>
using namespace std;
bool Simetrican(int n)
{
    int p=1,tmp=n;

    while (tmp) { p*=10; tmp/=10; }
    p/=10;

    while (n)
    {
        if (n/p != n%10) return false;
        n%=p;
        n/=10;
        p/=100;
    }
    return true;
}
int main()
{
    int n;

    cout << "Unesi n: ";
    cin >> n;
    while (n)
    {
        Simetrican(n) ? cout << "JEST simetrican!" << endl : cout << "NIJE simetrican!" << endl ;
        cout << "Unesi n: ";
        cin >> n;
    }

    cout << "Unijeli ste 0, kraj programa !" << endl;

    return 0;
}
