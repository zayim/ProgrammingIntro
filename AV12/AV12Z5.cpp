#include <iostream>
using namespace std;
void NaopakiIspis()
{
    int n;
    cout << "Unesi broj (0 za kraj): "; cin >> n;
    if (!n) { cout << "Brojevi ispisani u orbutom poretku: "; return; }
    NaopakiIspis();
    cout << n << " ";
}
int main()
{
    NaopakiIspis();
    return 0;
}
