#include <iostream>
#include <fstream>
#include <ctime>
#include <windows.h>
using namespace std;

class Employeer {
    public:
        string surname;
        string name;
        string level;
        char *comeTime;

        Employeer(){
            cout << "Surname: ";
            cin >> surname;

            cout << "Name: ";
            cin >> name;

            cout << "Level: ";
            cin >> level;

            time_t seconds = time(NULL);
            tm *timeinfo = localtime(&seconds);
            comeTime = asctime(timeinfo);
        }

        void print(){
            cout << this->surname << endl << this->name << endl << this->level << endl << this->comeTime << endl;
        }
};

int menu(){
    cout << "Добавить - 1" << endl;
    cout << "выйти - 0" << endl;

    int result;
    cin >> result;

    return result;
}

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ofstream write; // свойство нового класса
    write.open("D:/Рабочий стол/workers.txt", ios::app); // в конструктор
    // string surname, name, level;

    // Employeer arr;
    

    int result;
    while(true){
        result = menu();
        if(result == 1){
            Employeer employeer = Employeer();
            employeer.print();
        } else {
            if(result == 0){
                cout << "Конец работы программы";
                break;
            }
        }

    }


    // cin.get();


    // метод в новомо классе
    // if (write.is_open())
    // {
    //     write << surname << " " << name << " " << level << " --- " << asctime(timeinfo) << endl;
    // }
    write.close();
    return 0;
}