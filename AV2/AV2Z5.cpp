#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    double D,x1,x2;

    cout << "Unesi koeficijente kvadratne jednacine...\n";
    cout << "a: "; cin >> a;
    cin.ignore(10000,'\n'); cin.clear();
    cout << "b: "; cin >> b;
    cin.ignore(10000,'\n'); cin.clear();
    cout << "c: "; cin >> c;

    D=b*b-4*a*c;

    if (!a && !b && !c) cout << "Jednacina je tacna za sve x.";
    else if (!a && !b && c) cout << "Jednacina nema rjesenja.";
    else if (!a && b) cout << "Jednacina ima jedinstveno realno rjesenje x=" << (-1.0*c/b);
    else if (a && D>0) cout << "Jednacina ima dva razlicita rjesenja: x1=" << ((-1.0*b-sqrt(D))/(2.0*a)) <<
                                                                    " x2=" << ((-1.0*b+sqrt(D))/(2.0*a));
    else if (a && !D) cout << "Jednacina ima jedinstveno realno rjesenje x=" << ((-1.0*b)/(2.0*a));
    else
    {
        cout << "Jednacina ima dva konjugovano-kompleksna rjesenja:" << endl;
        cout << "x1 = "; if (-1.0*b/(2.0*a)) cout << (-1.0*b/(2.0*a)); cout << " - i*" << (sqrt(-1.0*D)/(2.0*a)) << endl;
        cout << "x2 = "; if (-1.0*b/(2.0*a)) cout << (-1.0*b/(2.0*a)); cout << " + i*" << (sqrt(-1.0*D)/(2.0*a)) << endl;
    }
    return 0;
}

/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    double D,x1,x2;

    cout << "Unesi koeficijente kvadratne jednacine...\n";
    cout << "a: "; cin >> a;
    cin.ignore(10000,'\n'); cin.clear();
    cout << "b: "; cin >> b;
    cin.ignore(10000,'\n'); cin.clear();
    cout << "c: "; cin >> c;

    D=b*b-4*a*c;

    if (!a)
    {
        if (!b)
        {
            if (!c) cout << "Jednacina je tacna za sve x.";
            else cout << "Jednacina nema rjesenja.";
        }
        else cout << "Jednacina ima jedinstveno realno rjesenje x=" << (-1.0*c/b);
    }
    else
    {
        if (D>0) cout << "Jednacina ima dva razlicita rjesenja: x1=" << ((-1.0*b-sqrt(D))/(2.0*a)) <<
                                                                  " x2=" << ((-1.0*b+sqrt(D))/(2.0*a));
        else if (!D) cout << "Jednacina ima jedinstveno realno rjesenje x=" << ((-1.0*b)/(2.0*a));
        else
        {
            cout << "Jednacina ima dva konjugovano-kompleksna rjesenja:" << endl;
            cout << "x1 = "; if (-1.0*b/(2.0*a)) cout << (-1.0*b/(2.0*a)); cout << " - i*" << (sqrt(-1.0*D)/(2.0*a)) << endl;
            cout << "x2 = "; if (-1.0*b/(2.0*a)) cout << (-1.0*b/(2.0*a)); cout << " + i*" << (sqrt(-1.0*D)/(2.0*a)) << endl;
        }
    }

    return 0;
}*/
