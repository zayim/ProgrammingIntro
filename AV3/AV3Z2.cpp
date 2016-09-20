#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char r[]="+-----+-------+---------+\n";
    int a,b,n;

    cout << "Unesi a,b: "; cin >> a >> b;
    n=a-1;

    cout << r << "| N   | N^2   | N^3     |\n" << r;
    while (b-n++)
    cout << left << "| " << setw(3) << n << " | " << setw(5) << (n*n) << " | " << setw(7) << (n*n*n) << " |\n";
    cout << r;

    return 0;
}
