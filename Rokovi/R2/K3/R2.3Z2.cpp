#include <iostream>
using namespace std;
void STRCAT(char a[], char b[])
{
    int len_a=0,i=0;

     while (a[++len_a]!='\0');

     i=len_a-1;
     while (b[++i-len_a]!='\0') a[i]=b[i-len_a];
     a[i]='\0';
}
int main()
{
    char a[100],b[100];

    cout << "Unesi 2 stringa: "; cin >> a >> b;
    STRCAT(a,b);
    cout << "REZULTAT: " << a << endl;

    return 0;
}
