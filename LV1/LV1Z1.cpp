#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b;

    cout << "Unesi a,b: "; cin >> a >> b;
    cout << "Rezultat: " << pow((a+b)/(1+sqrt((a*a+b*b)/(a*a-b*b))),2.0/3.0) << endl;

    return 0;
}
