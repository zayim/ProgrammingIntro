#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char z1,z2;
    int n,i,j;

    cout << "Unesi n i 2 znaka: "; cin >> n >> z1 >> z2;

    cout << setfill(z1) << setw(n) << "" << endl;;
    for (i=2; i<=n-1; i++){
    for (j=1; j<=n; j++){
        cout << (!(j-1) || !(j-n) || !(j-i) || !(j-n+i-1) ? z1 : z2 ) ; }
        cout << endl; }
    cout << setw(n) << "" << endl;

    return 0;
}
