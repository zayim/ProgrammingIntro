#include <iostream>
using namespace std;
void Brisanje(char a[], char b[], char c[])
{
    int i,j,len_a=0,len_b=0,len_c=0;
    bool ima;

    while (a[++len_a]!='\0');
    while (b[++len_b]!='\0');

    for (i=0; i<len_a; i++)
    {
        ima=false;
        for (j=0; j<len_b; j++)
            if (a[i]==b[j])
            {
                ima=true;
                break;
            }
        if (!ima) c[len_c++]=a[i];
    }
    c[len_c]='\0';

}
int main()
{
    char a[100],b[100],c[100];

    cout << "Unesi glavni string i podstring: ";
    cin >> a >> b;

    Brisanje(a,b,c);
    cout << "String c: " << c << endl;

    return 0;
}
