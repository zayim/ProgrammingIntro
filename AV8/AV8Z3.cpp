#include <iostream>
using namespace std;
int main()
{
    int n,p,i;
    double a[100];
    bool unimodalan=true;

    cout << "Unesi n: "; cin >> n;
    cout << "Unesi niz: ";
    for (i=0; i<n; i++) cin >> a[i];

    for (p=0; p<n; p++)
    {
        unimodalan=true;
        for (i=0; i<p; i++) if (a[i] >= a[i+1]) unimodalan=false;
        for (i=p; i<n-1; i++) if (a[i] <= a[i+1]) unimodalan=false;

        if (unimodalan) { cout << "Jest unimodalan!"; return 0; }
    }

    cout << "Nije unimodalan!";
    return 0;
}
