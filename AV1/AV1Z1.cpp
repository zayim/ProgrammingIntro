#include <iostream>
using namespace std;
int main()
{
    double a,b;

    cout << "Unesi a,b: "; cin >> a >> b;
    cout << "Rezultat: " << ((a+b)/(1+(a*a+b*b)/(a*a-b*b))) << endl;

    return 0;
}
