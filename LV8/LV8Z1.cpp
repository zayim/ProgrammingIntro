#include <iostream>
using namespace std;
void AnalizaBroja(int n, int &BrojCifara, int &BrojParnihCifara, int &RasponCifara)
{
    BrojCifara=BrojParnihCifara=0;
    int tmp=n,min=10,max=-1;

    while(tmp)
    {
        BrojCifara++;
        if (!((tmp%10)%2)) BrojParnihCifara++;
        if (tmp%10 > max) max=tmp%10;
        if (tmp%10 < min) min=tmp%10;
        tmp/=10;
    }
    RasponCifara=max-min;
}
int main()
{
    int n,bc,bpc,rc;

    cout << "Unesi n: "; cin >> n;
    AnalizaBroja(n,bc,bpc,rc);

    cout << "Broj cifara:        " << bc << endl;
    cout << "Broj parnih cifara: " << bpc << endl;
    cout << "Raspon cifara:      " << rc << endl;

    return 0;
}
