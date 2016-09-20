#include <iostream>
using namespace std;
int main()
{
    int m,n,a[100],b[100],i,j,k=0;
    bool ima[100]={},moze=true;

    cout << "Unesi m: "; cin >> m;
    cout << "Unesi niz A: ";
    for (i=0; i<m; i++) cin >> a[i];

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz B: ";
    for (i=0; i<n; i++) cin >> b[i];

    for (i=0; i<n; i++)
    {
        moze=false;
        for (j=k; j<m; j++)
            if (b[i]==a[j] && !ima[j])
            {
                moze=true;
                ima[j]=true;
                k=j+1;
                break;
            }

        if (!moze) { cout << endl << "NE MOZE se niz B dobit iz niza A !" << endl; return 0; }
    }

    cout << endl << "MOZE se niz B dobit iz niza A !" << endl;
    return 0;
}
