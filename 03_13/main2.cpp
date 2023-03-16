#include <iostream>
#include <windows.h>
#include <string.h>
using namespace std;

const int m = 10;

// void func(int arr[][m]){
//     cout << arr[1][1];
// }

void func2(int* a){
    *(a) = 5;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // int i = 10;
    // int *pi = &i;
    // int **ppi = &pi; 

    // cout << i << endl;
    // cout << pi << endl;
    // cout << *pi << endl;
    // cout << ppi << endl;
    // cout << *ppi << endl;

    int a[] = {1,2,3,4,5};
    int i = 2;
    int& d = i;
    // func();
    func2(&i);
    cout << i;
}

