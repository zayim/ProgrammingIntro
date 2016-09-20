#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    int z=0,n,p[1000],i,j,x,tmp;
    bool visited[1000]={};

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi permutaciju: ";
    for (i=1; i<=n; i++) cin >> p[i];

    cout << "Ciklusi u permutaciji su: ";
    tmp=i=1;
    while (z!=n)
    {
        tmp=i;
        visited[tmp]=true;
        z++;
        cout << "( " << tmp << " ";
        while(p[i]!=tmp)
        {
            visited[p[i]]=true;
            i=p[i];
            z++;
            cout << i << " ";
        }
        cout << ")  ";
        i=1;
        while (i<=n && visited[i++]); i--;
    }

    return 0;
}
