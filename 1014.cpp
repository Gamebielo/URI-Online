#include <iostream> // Biblioteca 'stdio.h' evoluída do C++
#include <stdlib.h>
#include <iomanip>  // Biblioteca com funções para formatar saídas

using namespace std;

int main()
{
    int X;  //km
    float Y;    // gasosa

    cin >> X;
    cin >> Y;

    cout << fixed << setprecision(3) << X/Y << " km/l" << endl;

    system("pause");
    return 0;
}
