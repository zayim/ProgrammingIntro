#include <iostream>
using namespace std;
int Faktori(int a[], int n)
{
    int bp=0,i=3,tmp=n;
    bool jest;

    if (!(tmp%2)) a[bp++]=2;
    while (!(tmp%2)) tmp/=2;

    while (tmp-1)
    {
        jest=!(tmp%i);
        while (!(tmp%i)) tmp/=i;
        if (jest) a[bp++]=i;
        i+=2;
    }
    return bp;
}
int main()
{
    int n,i,a[100],bp;

    cout << "Unesi n: "; cin >> n;

    bp=Faktori(a,n);

    cout << "Faktori od n: ";
    for (i=0; i<bp; i++) cout << a[i] << " ";

    return 0;
}

