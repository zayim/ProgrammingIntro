#include <iostream>
using namespace std;
template <typename Tip>
void ekstremi(Tip niz[],int n,int &max,int &min)
{
    max=min=0;
    int i;

    for (i=1; i<n-1; i++)
    {
        if (niz[i]>niz[i-1] && niz[i]>niz[i+1]) max++;
        else if (niz[i]<niz[i-1] && niz[i]<niz[i+1]) min++;
    }
}
int main()
{
    int a[100],n,i,max,min;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    ekstremi(a,n,max,min);
    cout << "Broj lokalnih maximuma: " << max << endl;
    cout << "Broj lokalnih minimuma: " << min << endl;

    return 0;
}
