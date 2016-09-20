#include <iostream>
using namespace std;
int main()
{
    int n,p=1,k=0;

    cout << "Unesi n: "; cin >> n;

    while (n>=10)
    {
        p=1;
        while (n) { p*=n%10; n/=10; }
        n=p;
        k++;
    }

    cout << "Multiplikativna otpornost broja n: " << k << endl;
    return 0;
}
