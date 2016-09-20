#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c,s;

    cout << "Unesi stranice trougla: ";
    cin >> a >> b >> c;

    while ( max(max(a,b),c) > (a+b+c)/2.0)
    {
        cout << "Neispravan unos! Ponovo: ";
        cin >> a >> b >> c;
    }

    s=(a+b+c)/2.0;
    cout << "Povrsina trougla je: " << sqrt(s*(s-a)*(s-b)*(s-c)) << endl;

    return 0;
}
