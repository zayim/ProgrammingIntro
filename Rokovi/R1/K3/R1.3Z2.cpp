#include <iostream>
using namespace std;
int STRCMP(char a[], char b[])
{
    int len_a=0,len_b=0,len,i=0;

    while (a[++len_a]!='\0');
    while (b[++len_b]!='\0');

    len=min(len_a,len_b);
    while (i<len && a[i]==b[i++]);
    i--;

    if (a[i] > b[i]) return 1;
    if (a[i] < b[i]) return -1;
    if (len_a==len_b) return 0;
    if (len_a > len_b) return 1;
    return -1;
}
int main()
{
    char a[100],b[100];

    cout << "Unesi 2 stringa: "; cin >> a >> b;

    if (!STRCMP(a,b)) cout << "Stringovi su JEDNAKI !" << endl;
    else if (STRCMP(a,b)==1) cout << "Prvi string je IZA drugog !" << endl;
    else cout << "Pevi string je ISPRED drugog !" << endl << endl;

    return 0;
}
