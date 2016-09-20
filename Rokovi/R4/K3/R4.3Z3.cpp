#include <iostream>
using namespace std;
int f(int matrica[5][5])
{
    int red=0,z=0,max=0,i,j;

    for (i=0; i<5; i++) max+=matrica[0][i];

    for (i=0; i<5; i++)
    {
        z=0;
        for (j=0; j<5; j++) z+=matrica[i][j];
        if (z > max) { max=z; red=i; }
    }

    return red+1;
}
int main()
{
    int a[5][5],i,j;

    cout << "Unesi matricu 5x5: " << endl;

    for (i=0; i<5; i++)
    for (j=0; j<5; j++) cin >> a[i][j];

    cout << "Index reda sa najvecim zbirom: " << f(a) << endl;
    return 0;
}
