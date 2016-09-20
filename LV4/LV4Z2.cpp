#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int m,n,i,j;

    cout << "Unesi m i n: ";
    cin >> m >> n;

    for (i=m-1; i>=0; i--)
    {
        cout << setw(i) << "";
        for (j=0; j<(n+1)/2; j++) cout << (char)('A' + m-1 - i + j);
        for (j=n/2-1; j>=0; j--) cout << (char)('A' + m-1 - i + j);
        cout << endl;
    }

    return 0;
}

