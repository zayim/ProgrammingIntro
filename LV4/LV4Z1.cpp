#include <iostream>
using namespace std;
int main()
{
    int i,a,b,z=0,suma=0,tmp;

    cout << "Unesi a,b: ";
    cin >> a >> b;

    for (i=a; i<=b; i++)
    {
        tmp=i; suma=0;
        while (tmp>0)
        {
            suma+=(tmp%10);
            tmp=tmp/10;
        }
        if (i%suma == 0) z++;
    }

    cout << "Rezultat: " << z << endl;

    return 0;
}
