#include <iostream>
#include <cmath>
using namespace std;
int Hanoi(int n, int x=1, int y=2, int z=3, int brp=0)
{
    if (!n) brp++;
    if (n)
    {
        brp=Hanoi(n-1,x,z,y,brp);
        cout << brp << ". POTEZ: Prebaci disk sa stapa " << x << " na stap " << y << endl;
        brp=Hanoi(n-1,z,y,x,brp);
    }
    return brp;
}
int main()
{
    int n;
    cout << "Unesi broj diskova: "; cin >> n;
    Hanoi(n);
    return 0;
}
