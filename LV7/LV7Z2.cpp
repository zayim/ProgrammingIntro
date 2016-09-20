#include <iostream>
using namespace std;
int main()
{
    int n,a[100],i,j,tmp;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    for (i=0; i<n; i++)
    {
        tmp=0; j=i;
        while (++j<n)
            if (a[i] < a[j])
            {
                tmp=a[j];
                break;
            }

        a[i]=tmp;
    }

    cout << "Modifikovani niz: ";
    for (i=0; i<n; i++) cout << a[i] << " ";

    return 0;
}
