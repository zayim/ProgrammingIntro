#include <iostream>
using namespace std;
int main()
{
    int i,j,n;

    cout << "Unesi n: ";
    cin >> n;

    for (i=0; i<(n+1)/2; i++)
    {
        for (j=0; j<i; j++) cout << (char)('A'+j);
        for (j=0; j<n-2*i; j++) cout << (char)('A'+i);
        for (j=0; j<i; j++) cout << (char)('A'+i-j-1); cout << endl;
    }
    for (i=n/2-1; i>=0; i--)
    {
        for (j=0; j<i; j++) cout << (char)('A'+j);
        for (j=0; j<n-2*i; j++) cout << (char)('A'+i);
        for (j=0; j<i; j++) cout << (char)('A'+i-j-1); cout << endl;
    }

    return 0;
}
