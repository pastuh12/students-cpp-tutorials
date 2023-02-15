#include <iostream>
#include <windows.h>
#include <string.h>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string text, word, wordd, copyText;
	int choice = -1, count = 0;
	int position = 0;
	while (choice != 0)
	{
		cout << endl <<
			"Выберите что хотите сделать." << endl <<
			"1 - Ввести текст" << endl <<
			"2 - Считать количество повторений слова" << endl <<
			"0 - Выйти из программы" << endl;
		cin >> choice;
		cout << choice;
		switch (choice)
		{
		case 0:
			cout << "Программа успешно завершена!";
			break;
		case 1:
			cout << "Введите текст:" << endl;
			cin.get();
			getline(cin, text);
			break;
		case 2:
			copyText = text;
			count = 0;
			cout << "Теперь введите слово повторы, которого будем искать." << endl;
			cin >> wordd;
			if (wordd != "") {
				position = copyText.find(' ');
				while (position > 0) {
					count += copyText.substr(0, position) == wordd;
					copyText.erase(0, position + 1);
					position = copyText.find(' ');
				}
				count += copyText.substr(0, copyText.size()) == wordd;
				cout << "Количество повторов в тексте -> " << count << endl;
			}
			else {
				cout << "Ничего не ввел" << endl;
			}
		default:
			cout << "Нет такой команды! Попробуйте снова.";
			break;
		}

	}
}