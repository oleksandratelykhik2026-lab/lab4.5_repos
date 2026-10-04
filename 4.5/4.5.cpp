#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
    double x, y;
    double R1, R2;

    cout << "R1 = ";
    cin >> R1;

    cout << "R2 = ";
    cin >> R2;

    // 1 спосіб
    for (int i = 0; i < 10; i++)
    {
        cout << "x = ";
        cin >> x;

        cout << "y = ";
        cin >> y;

        if (x * x + y * y >= R2 * R2 &&
            x * x + y * y <= R1 * R1)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    // 2 спосіб
    srand((unsigned)time(NULL));

    for (int i = 0; i < 10; i++)
    {
        x = 2 * R1 * rand() / RAND_MAX - R1;
        y = 2 * R1 * rand() / RAND_MAX - R1;

        if (x * x + y * y >= R2 * R2 &&
            x * x + y * y <= R1 * R1)
        {
            cout << setw(8) << setprecision(4) << x << " "
                << setw(8) << setprecision(4) << y << " "
                << "yes" << endl;
        }
        else
        {
            cout << setw(8) << setprecision(4) << x << " "
                << setw(8) << setprecision(4) << y << " "
                << "no" << endl;
        }
    }

    return 0;
}