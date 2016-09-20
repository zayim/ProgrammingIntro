#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float suma=0.0;
    int n;

    cout << "Unesi n: "; cin >> n;
    do suma=sqrt(suma)+n*1.; while(n--);
    cout << "Trazena suma: " << suma << endl;

    return 0;
}
