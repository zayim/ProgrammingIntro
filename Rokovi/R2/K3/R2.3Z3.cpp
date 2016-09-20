#include <iostream>
#include <iomanip>
using namespace std;
void transponuj(int matrica[5][5])
{
    int i,j;

    for (i=0; i<4; i++)
    for (j=i+1; j<5; j++) swap(matrica[i][j],matrica[j][i]);
}
int main()
{
    int a[5][5],i,j;

    cout << "Unesi matricu 5x5: " << endl;
    for (i=0; i<5; i++)
    for (j=0; j<5; j++) cin >> a[i][j];

    transponuj(a);

    cout << "Transponovana matrica: " << endl;
    for (i=0; i<5; i++) {
    for (j=0; j<5; j++) cout << setw(5) << a[i][j]; cout << endl; }
}
