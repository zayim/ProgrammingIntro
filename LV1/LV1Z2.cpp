#include <iostream>
using namespace std;
int main()
{
    int a,b;

    cout << "Unesi a,b: "; cin >> a >> b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout << "Novo a: " << a << endl;
    cout << "Novo b: " << b << endl;

    return 0;
}

