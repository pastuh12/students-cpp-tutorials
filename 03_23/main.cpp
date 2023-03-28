#include <iostream>
#include <iomanip>
#include <math.h>
void input(int **mas, int n, int m);
void check(int *n, int *m);
void output2d(int **mas, int *n, int *m);
void changemas(int **mas, int *n, int *m);
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int n, m, n1, m1;
    cin >> n >> m;
    check(&n, &m);
    int **mas = new int *[n];
    input(mas, n, m);
    output2d(mas, &n, &m);
    changemas(mas, &n, &m);
}
void input(int **mas, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        *(mas + i) = new int[m];
    }
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            *(*(mas + i) + j) = rand() % 100 * pow(-1, rand() % 2);
        }
    }
}
void check(int *n, int *m)
{
    while (true)
    {
        if (*n >= 10 and *m <= 1000)
        {
            break;
        }
        else
        {
            cout << "Вы ввели неправильное значение!" << endl;
            cin >> *n;
        }
    }
}
void output2d(int **mas, int *n, int *m)
{
    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *m; j++)
        {
            cout << setw(4) << *(*(mas + i) + j);
        }
        cout << endl;
    }
}
void changemas(int **mas, int *n, int *m)
{
    int oldN = *n;
    int oldM = *m;
    cout << "Введите новый размер массива\n";
    cin >> *n >> *m;
    while (true)
    {
        if (*n >= 10 and *m <= 1000)
        {
            break;
        }
        else
        {
            cout << "Вы ввели неправильное значение!" << endl;
            cin >> *n >> *m;
        }
    }
    int **mas1 = new int *[*n];
    for (int i = 0; i < *n; i++)
    {
        *(mas1 + i) = new int[*m];
    }
    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *m; j++)
        {
            if (i >= oldN or j >= oldM)
            {
                *(*(mas1 + i) + j) = 0;
            }
            else
            {
                *(*(mas1 + i) + j) = *(*(mas + i) + j);
            }
        }
    }
    delete mas;
    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *m; j++)
        {
            cout << setw(4) << *(*(mas1 + i) + j);
        }
        cout << endl;
    }
}