#include <iostream>
#include <fstream>

using namespace std;

int main()

{
  ifstream fin("input.txt"); 
  int usefulCode = 0;
  if (!fin.is_open()) 
  {
    cerr << "ERROR: Cannot open file" << endl;
    return 1;
  }

  string hiddenText; 
  char c;        
//11101
  while (fin.get(c))
  {
    if (static_cast<unsigned char>(c) >= 128)
    {
      cout << "dsfs";
      c = static_cast<unsigned char>(c) << 8; // выделяем младший байт
      hiddenText += static_cast<unsigned char>(c); // добавляем его в строку скрытого текста
    }
    else 
    {
      hiddenText += c;
    }
  }

  fin.close(); 

  cout << "Hidden text: " << hiddenText << endl;

  return 0;
}