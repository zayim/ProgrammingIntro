#include <iostream>
using namespace std;
int main()
{
    int n,i,j,tmp1[100]={},z=0,s=1,k=0;
    double a[100],tmp[100]={};
    bool ima[100]={};

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    for (i=0; i<n; i++)
    {
        if (!ima[i])
        {
            z=1;
            ima[i]=true;
            for (j=i+1; j<n; j++)
                if (a[i]==a[j]) { z++; ima[j]=true; }

            k=s;
            while (tmp1[--k] > z || (tmp1[k] == z && tmp[k] > a[i]))
            {
                    tmp1[k+1]=tmp1[k];
                    tmp[k+1]=tmp[k];
            }
            tmp1[k+1]=z;
            tmp[k+1]=a[i];
            s++;
        }
    }

    for (i=1; i<s; i++) cout << "(" << tmp[i] << "," << tmp1[i] << ") ";

    return 0;
}
