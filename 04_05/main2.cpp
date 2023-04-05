#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string strToLowerCase(string &str)
{
  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] >= 65 && str[i] <= 90)
      str[i] += 32;
  }
  return str;
}
bool findSubstring(string str, string sub)
{
  if (str.rfind(sub) != string::npos)
    return true;
  else
    return false;
}

void readFromFile(ifstream &in){

}

int main()
{
  string fileName = "./input.txt";
  string outFile = "./out.txt";
  ifstream in(fileName);

  if (in.is_open())
  {
    string line;
    while (getline(in, line))
    {
      cout << line << endl;
    }
  }
  else
  {
    cout << "File not open";
  }
  in.close();
  in.open(fileName);
  string substring;
  int count = 0;

  string word;

  if (in.is_open())
  {
    while(getline(in, substring))
    {
      count++;
      word = substring;
    }
  }
  else
  {
    cout << "File not open";
  }
  in.close();
  in.open(fileName);

  ofstream out2;
  out2.open(outFile, ios::app);
  if (in.is_open() && out2.is_open())
  {
    string line;
    string line_copy;
    for(int i = 0; i < count - 1; i++){
      getline(in, line);
      line_copy = line;

      strToLowerCase(line);
      if (findSubstring(line, word))
        out2 << line_copy << endl;
    }
  }
  else
  {
    cout << "File not open";
  }
  in.close();
  out2.close();
}