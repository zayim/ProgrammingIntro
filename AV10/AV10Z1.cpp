#include <iostream>
#define PI 3.14159265358979
using namespace std;
void pretvorba(double alfa, double &stepeni)
{
    stepeni=(180*alfa)/PI;
}
void pretvorba(double alfa, int &stepeni, int &minute, int &sekunde)
{
    double ugao=(180*alfa)/PI;
    stepeni=int(ugao);
    minute=int(60*(ugao-stepeni*1.));
    sekunde=int(60*(60*(ugao-stepeni*1.)-minute));
}
int main()
{
    double alfa,ugao;
    int stepeni,minute,sekunde;

    cout << "Unesi ugao u radijanima: "; cin >> alfa;
    pretvorba(alfa,ugao);
    cout << "Ugao u stepenima: " << ugao << endl;

    cout << "Unesi ugao u radijanima: "; cin >> alfa;
    pretvorba(alfa,stepeni,minute,sekunde);
    cout << "Ugao u stepenima, minutama, sekundama: " << stepeni << "* " << minute << "' " << sekunde << "\"" << endl;

    return 0;
}
