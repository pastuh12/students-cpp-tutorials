#include <iostream>
#include <fstream>
// #include <windows.h>
using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;

    inFile.open("./data.txt");
    outFile.open("./data.txt");


    string stroka;

    // while(inFile.eof() != 1){
    //     getline(inFile, stroka);
    //     cout << stroka << endl;
    // }

    // while (getline(inFile, stroka))
    // {
    //     cout << stroka << endl;
    // }

    for(int i = 0; i < 2; i++){
        getline(inFile, stroka);
        cout << stroka << endl;
    }

    inFile.close();
    //после работы с файлом нудно закрыть поток

    outFile << "lessonCPP";


    outFile.close();


    return 0;
}
