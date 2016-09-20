#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x1,y1,z1,x2,y2,z2,x3,y3,z3,a,b,c;

    cout << "Unesi koordinate 3 tacke u prostoru: " << endl;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> x3 >> y3 >> z3;

    a=(y3-y1)*(z2-z1) - (z3-z1)*(y2-y1);
    b=(z3-z1)*(x2-x1) - (x3-x1)*(z2-z1);
    c=(x3-x1)*(y2-y1) - (y3-y1)*(x2-x1);

    cout << "Povrsina je: " << sqrt(a*a + b*b + c*c) << endl;

    return 0;
}

