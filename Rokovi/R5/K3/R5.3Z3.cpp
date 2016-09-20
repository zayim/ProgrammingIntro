#include <iostream>
using namespace std;
int main()
{
    int i,j,n,z=0,a[10][10],max=0,c=0;
    bool simetricna=true;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi kvadratnu matricu: " << endl;
    for (i=0; i<n; i++)
    for (j=0; j<n; j++) cin >> a[i][j];

    for (i=0; i<n; i++) max+=a[i][0];
    for (j=1; j<n; j++)
    {
        z=0;
        for (i=0; i<n; i++) z+=a[i][j];
        if (z > max) { max=z; c=j; }
    }
    cout << "Index kolone s najvecim zbirom: " << (c+1) << endl;

    z=0;
    for (i=0; i<n; i++)
    for (j=0; j<i; j++) z+=a[i][j];
    cout << "Zbir elemenata ispod glavne dijagonale: " << z << endl;

    for (i=0;  i<n; i++)
    for (j=i+1; j<n; j++)
        if (a[i][j]!=a[j][i]) { simetricna=false; break; }
    simetricna ? cout << "Matrica JESTE simetricna !" : cout << "Matrica NIJE simetricna !" ;

    return 0;
}
