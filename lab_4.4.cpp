
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double R1, R2, xp, xk, dx;
    double x, y;

    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed << setprecision(2);
    cout << "\n   Таблиця значень функції\n";
    cout << "-----------------------------\n";
    cout << setw(10) << "x" << setw(15) << "y" << endl;
    cout << "-----------------------------\n";

    x = xp;

    while (x <= xk)
    {
        if (x <= -6)
        {
            y = R2 / 2;
        }
        else if (x <= -2 * R2)
        {
            y = (R2 / 2) * (x + 2 * R2) / (2 * R2 - 6);
        }
        else if (x <= 0)
        {
            y = sqrt(R2 * R2 - (x + R2) * (x + R2));
        }
        else if (x <= 2 * R1)
        {
            y = -sqrt(R1 * R1 - (x - R1) * (x - R1));
        }
        else
        {
            y = 2 * R1 - x;
        }

        cout << setw(10) << x << setw(15) << y << endl;

        x += dx;
    }

    return 0;
}
