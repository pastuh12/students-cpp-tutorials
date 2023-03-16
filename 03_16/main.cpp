#include <iostream>
#include <windows.h>
#include <string.h>
using namespace std;

const int m = 10;

//получить значение от пользователя, а также способ желаемой работы с числом.
// всего имеется два вида работы над числом:
// 1. действия производятся над самим числом, в ответе выводится только результат работы над числом
// 2. число не меняется, а в ответе выводится начальное значение и результат работы над ним

// логика работы над числом выбирается самим разработчиком

int byLink(int* a);
int byValue(int b);
int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // int a = 0;
    // // int *p = &a;
    // byLink(&a);
    // cout << a << endl;
    // byValue(a);
    // cout << a << endl;

    // вопросы
    int **pp;
    int *p;
    int c = 123;

    p = &c;
    pp = &p;

    cout << *pp << endl;
    cout << *&p << endl;
    cout << **pp << endl;

}
//по ссылке
int byLink(int *a)
{
    *a += 1;
    cout << "In function: " << *a << endl;
    return 0;
}
//по значению
int byValue(int b)
{
    b += 1;
    cout << "In function: " << b << endl;
    return 0;
}