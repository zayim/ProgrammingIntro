#include <iostream>
using namespace std;
int main()
{
    float x,P=0.0;
    int n,a;

    cout << "Unesi realan broj x i stepen polinoma n: ";
    cin >> x >> n;
    n++;

    cout << "Unesi koeficijente polinoma: ";

    while(--n)
    {
        cin >> a;
        P=(P+a)*x;
    }
    cin >> a;
    P+=a;

    cout << "P(x)=" << P << endl;

    return 0;
}

