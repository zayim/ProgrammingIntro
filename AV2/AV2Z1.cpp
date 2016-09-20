#include <iostream>
using namespace std;
int main()
{
    int h,s,o;

    cout << "Unesi H, S, O: "; cin >> h >> s >> o;
    cout << "Broj molekula: " << min(min(h/2,s),o/4) << endl;

    return 0;
}
