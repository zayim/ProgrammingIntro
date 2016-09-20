#include <iostream>
using namespace std;
void f(double a[], int n, double &min, int &index)
{
    min=a[0]; index=0;
    int i;

    for (i=0; i<n; i++)
        if (a[i] <= min) { min=a[i]; index=i; }
}
int main()
{
    int n,i,ind;
    double a[100],min;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    f(a,n,min,ind);

    cout << "Najmanji element: " << min << endl;
    cout << "Index:            " << ind << endl;

    return 0;
}
