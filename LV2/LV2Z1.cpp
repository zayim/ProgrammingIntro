#include <iostream>
using namespace std;
inline int abs(int n) { return n<0 ? -n : n ; }
int main()
{
    int a,b,c,d;

    cout << "Unesi a,b,c,d: "; cin >> a >> b >> c >> d;
    (abs(a-c) + abs(b-d))%2 ? cout << "Nisu iste boje!" : cout << "Iste su boje!" ;

    return 0;
}
