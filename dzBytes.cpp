#include <iostream>
#include <math.h>
using namespace std;
int Bytes(int, int);
int main() 
{
	setlocale(LC_ALL, "Russian");
	int i;
	cin >> i;
	cout << "Ответ: " << Bytes(i, 0);
}
int Bytes(int i, int count) 
{
	if (i <= pow(2, count))
	{
		return count;
	}
	return Bytes(i, count += 1);
}