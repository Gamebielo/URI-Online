#include <iostream> // Biblioteca 'stdio.h' evoluída do C++
#include <stdlib.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float x1,x2, y1,y2;
    double dist;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    dist = sqrt( ((x2-x1) * (x2-x1)) + ((y2-y1) * (y2-y1) ));

    cout << fixed << setprecision(4) << dist << endl;

    system("pause");
    return 0;
}
