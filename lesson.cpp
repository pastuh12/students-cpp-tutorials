#include <iostream>
using namespace std;
int recur(int);
int factor2(int);
int fibonach(int);

struct Person
{
public:
    string name;
    Person(string n) {
        name = n;
    }
private:
    int age;
    bool haveCar;
};


//struct list
//{
//    list* preList;
//    list* next;
//    int value;
//};

//class Person {
//    private: string name;
//};

int main()
{
    setlocale(LC_ALL, "rus");

    Person tom("dfg");
    tom.age = 12;
    tom.haveCar = false;
    tom.name = "Tom";

    //Person foo = {"Foo", 32, false}

    Person tom;

    //cout << tom.name  << tom.age << tom.haveCar << endl;

    //Person peaple[];




    std::cout << "Hello World!\n";
}


int recur(int a) {
    if (a == 0) {
        cout << "Конец";
        return 0;
    }

    a--;
    return recur(a);
}

//int factor(int a) {
//    if (a == 0) {
//        //return;
//    }
//    return a * factor(--a);
//}


//последний вызов рекурсивной функции
int factor2(int a) {
    if (a == 1) {
        return 1;
    }

    return a * factor2(a - 1);
    //2 * factor2(1)
    //2 * 1

    //3 * factor2(2)
    //3 * 2 * factor2(1)
    //3 * 2 * 1
}

int fibonach(int a) {
    if (a == 1) {
        return 1;
    }
    else {
        if (a == 0) {
            return 0;
        }
    }

    return fibonach(a - 1) + fibonach(a - 2);
}


