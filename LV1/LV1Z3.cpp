#include <iostream>
using namespace std;
int main()
{
    int x,y,z,q,h,m,s;

    cout << "Unesi x,y,z,q:      "; cin >> x >> y >> z >> q;

    q+=3600*x+60*y+z;

    s=q%60; q=(q-s)/60;
    m=q%60; q=(q-m)/60;
    h=q%24;

    cout << "Vrijeme slijetanja: " << h << ":" << m << ":" << s << endl;

    return 0;
}
