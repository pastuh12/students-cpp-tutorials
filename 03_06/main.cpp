#include <iostream>
#include <windows.h>
#include <string.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int nStrok = 0;
    int nStolb = 0;

    int number = 0;
    int dis = 0;

    cout << "Enter n strok: ";
    cin >> nStrok;

    cout << "Enter n stolb: ";
    cin >> nStolb;

    for (int i = 1; i <= nStrok; i++)
    {
        cout << endl;
        number = i;
        dis = nStrok * 2 + 1 - 2 * i;
        for (int j = 1; j <= nStolb; j++)
        {
            if (j != 1)
            {
                if (j % 2 != 0)
                {
                    number = number + nStrok * 2 - dis;
                }
                else
                {
                    number = number + dis;
                }
            }
            cout << number << " ";
        }
    }
}