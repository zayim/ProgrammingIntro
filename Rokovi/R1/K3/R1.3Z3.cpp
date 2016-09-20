#include <iostream>
using namespace std;
bool ima_sedlo (int matrica[5][5])
{
    int i,j,min_red[5],max_red[5],min_kol,max_kol,min,max;

    for (i=0; i<5; i++)
    {
        min_red[i]=max_red[i]=matrica[i][0];
        for (j=1; j<5; j++)
        {
            if (matrica[i][j] > max_red[i]) max_red[i]=matrica[i][j];
            if (matrica[i][j] < min_red[i]) min_red[i]=matrica[i][j];
        }
    }

    for (i=0; i<5; i++)
    {
        min_kol=max_kol=matrica[0][i]; min=max=0;
        for (j=1; j<5; j++)
        {
            if (matrica[j][i] > max_kol) { max_kol=matrica[j][i]; max=i; }
            if (matrica[j][i] < min_kol) { min_kol=matrica[j][i]; min=i; }
        }
        if (matrica[max][i]==max_red[max]) return true;
        if (matrica[min][i]==min_red[min]) return true;
    }

    return false;
}
int main()
{
    int a[5][5],i,j;

    cout << "Unesi matricu 5x5: " << endl;
    for (i=0; i<5; i++)
    for (j=0; j<5; j++) cin >> a[i][j];

    ima_sedlo(a) ? cout << "IMA sedlo !" : cout << "NEMA sedlo !" ;
    return 0;
}
