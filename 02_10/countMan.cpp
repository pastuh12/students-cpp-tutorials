#include <iostream>
#include <fstream>
// #include <windows.h>
using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;
    fstream file;

    inFile.open("./data.txt");
    outFile.open("./data.txt", ios::app);


    string stroka;
    int count;

    while(inFile.eof() != 1){
        getline(inFile, stroka);
        if(stroka == "man"){
            count++;
            cout << stroka;
        }
    }


    inFile.close();
    //после работы с файлом нудно закрыть поток

    outFile << "\n" << count;


    outFile.close();



    return 0;
}
