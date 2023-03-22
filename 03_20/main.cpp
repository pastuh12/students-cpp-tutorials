#include <iostream>
#include <time.h>
#include <iomanip>
#include <math.h>

using namespace std;
void check(int n, int m);
void input(int **mas, int n, int m);
void output2d(int **mas, int n, int m);
bool Arithmetic_mean(int **mas, int n, int m, int *suma);
int main()
{
    setlocale(LC_ALL, "Rus");
    int n, m, suma = 0;
    cout << "Введите количество элементов:" << endl;
    cin >> n >> m;
    // check(n, m);
    int **mas = new int *[n];
    input(mas, n, m);
    output2d(mas, n, m);
    bool b = Arithmetic_mean(mas, n, m, &suma);
    if (b)
        cout << suma;
    else
        cout << "Нет такого элемента!";
}
void input(int **mas, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        *(mas + i) = new int[m];
    }
    srand(time(0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            {
                *(*(mas + i) + j) = rand() % 100 * pow(-1, rand() % 2);
            }
        }
}
void check(int n, int m)
{
    while (true)
    {
        if (n >= 10 and m <= 1000)
        {
            break;
        }
        else
        {
            cout << "Вы ввели неправильное значение!" << endl;
            cin >> n, m;
        }
    }
}
void output2d(int **mas, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << setw(4) << *(*(mas + i) + j);
        }
        cout << endl;
    }
}
bool Arithmetic_mean(int **mas, int n, int m, int *summa)
{
    bool b = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (*(*(mas + i) + j) % 2 != 0 and *(*(mas + i) + j) % 5 == 0)
            {
                *summa += *(*(mas + i) + j);
                b = true;
            }
        }
    }
    return b;
}