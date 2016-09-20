#include <iostream>
using namespace std;
void UkloniRazmake(char a[], char b[])
{
    int n=-1,i=-1,j=0;

    while (a[++n]!='\0');
    while (a[--n]==' ');
    while (a[++i]==' ' && i<=n);

    while (i<=n)
    {
        while (a[i]==' ' && i++<=n);
        b[j++]=a[i++];
        if (a[i]==' ' && i<=n) b[j++]=a[i];
    }
    b[j]='\0';
}
int main()
{
    char a[100],b[100];

    cout << "Unesi recenicu: "; cin.getline(a,sizeof a);
    UkloniRazmake(a,b);
    cout << "Modifikovana recenica glasi \"" << b << "\"" << endl;

    return 0;
}
