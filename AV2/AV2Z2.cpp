#include <iostream>
using namespace std;
int main()
{
    int h1,m1,s1,h2,m2,s2,t;

    cout << "Unesi prvo  vrijeme (h min s): "; cin >> h1 >> m1 >> s1;
    cout << "Unesi drugo vrijeme (h min s): "; cin >> h2 >> m2 >> s2;

    t=3600*(h2-h1) + 60*(m2-m1) + (s2-s1);

    cout << "Izmedju ova dva trenutka proteklo je " << (t/3600) << "h "; t%=3600;
    cout << (t/60) << "m "; t%=60;
    cout << t << "s." << endl;

    return 0;
}
