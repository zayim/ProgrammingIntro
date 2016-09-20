#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i,j,n,m,x;

    cout << "Unesi n i m: "; cin >> n >> m;
    cout << "Trazeni brojevi: ";

    i=n-1;
    while (++i<=m)
    {
        j=-1;
        while (++j<=(int)(sqrt(i)))
        {
            x=int(sqrt(i - j*j));
            if (x*x + j*j == i)
            {
                cout << i << " ";
                break;
            }
        }
    }

    return 0;
}
