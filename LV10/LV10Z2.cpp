#include <iostream>
using namespace std;
void Permutacije(int n)
{
    static int a[10000],trenutna_permutacija[10000],dubina=1;
    static bool treba_inicijalizacija=true;
    int i,j,tmp,tmp2;

    if (treba_inicijalizacija)
    {
        for (i=1; i<=n; i++) a[i]=i;
        treba_inicijalizacija=false;
    }

    for (i=0; i<n; i++)
    {
        trenutna_permutacija[dubina]=a[n];

        dubina++;
        Permutacije(n-1);
        dubina--;

        tmp=a[n];
        for (j=1; j<=n; j++) swap(tmp,a[j]);
    }

    if (n==1)
    {
        for (i=1; i<=dubina; i++) cout << trenutna_permutacija[i] << " ";
        cout << endl;
        return;
    }
}
int main()
{
    int n;

    cout << "Unesi n: "; cin >> n;
    cout << "Sve permutacije skupa {1,2,...,n}: " << endl;
    Permutacije(n);

    return 0;
}
