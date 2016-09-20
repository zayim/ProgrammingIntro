#include <iostream>
using namespace std;
void prepisi(char a[], char b[])
{
    int i=0;

    do
    {
        if (a[i]>='a' && a[i]<='z') b[i]=a[i] + ('A'-'a');
        else b[i]=a[i];
    } while (a[++i]!='\0');
    b[i]='\0';
}
int main()
{
    char a[100],b[100];

    cout << "Unesi string: "; cin >> a;
    prepisi(a,b);
    cout << "Prepisani string: " << b << endl;

    return 0;
}
