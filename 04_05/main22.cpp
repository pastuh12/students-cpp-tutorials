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

void readFromFile(ifstream &in)
{
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
}

double amountNumber(string &fileName)
{
  ifstream in(fileName);
  string line;
  int amount = 0;
  double number = 0;
  int pos = 0;
  // это можно убрать
  if (in.is_open())
  {
    while (getline(in, line))
    {
      if (line.find(' ') == -1 && line.length() > 0)
      {
        amount++;
      }
      pos = line.find(' ');
      while (pos != string::npos)
      {
        number = stod(line.substr(0, pos));
        amount++;
        line.erase(0, pos + 1);
        pos = line.find(' ');
      }
      number = stod(line.substr(0, line.length()));
      amount++;
    }
    return amount;
  }
  else
  {
    cout << "File not open";
  }
  in.close();
}

double amountPlusNumber(string fileName)
{
  ifstream in(fileName);
  string line;
  int amount = 0;
  double number = 0;
  int pos = 0;

  if (in.is_open())
  {
    while (getline(in, line))
    {
      if (line.find(' ') == -1 && line.length() > 0)
      {
        number = stod(line.substr(0, line.length()));
        if (number > 0)
          amount++;
      }
      pos = line.find(' ');
      while (pos != string::npos)
      {
        number = stod(line.substr(0, pos));
        if (number > 0)
          amount++;
        line.erase(0, pos + 1);
        pos = line.find(' ');
      }
      number = stod(line.substr(0, line.length()));
      if (number > 0)
        amount++;
    }
    return amount;
  }
  else
  {
    cout << "File not open";
  }
  in.close();
}

double sum(string fileName)
{
  ifstream in(fileName);
  string line;
  double sum = 0;
  double number = 0;
  int pos = 0;

  if (in.is_open())
  {
    while (getline(in, line))
    {
      if (line.find(' ') == -1 && line.length() > 0)
      {
        number = stod(line.substr(0, line.length()));
        sum += number;
      }
      pos = line.find(' ');
      while (pos != string::npos)
      {
        number = stod(line.substr(0, pos));
        sum += number;
        line.erase(0, pos + 1);
        pos = line.find(' ');
      }
      number = stod(line.substr(0, line.length()));
      sum += number;
    }
    return sum;
  }
  else
  {
    cout << "File not open";
  }
  in.close();
}

double max(string fileName)
{
  ifstream in(fileName);
  string line;
  double max = -INT_MAX;
  double number = 0;
  int pos = 0;

  if (in.is_open())
  {
    while (getline(in, line))
    {
      if (line.find(' ') == -1 && line.length() > 0)
      {
        number = stod(line.substr(0, line.length()));
        if (number > max)
          max = number;
      }
      pos = line.find(' ');
      while (pos != string::npos)
      {
        number = stod(line.substr(0, pos));
        if (number > max)
          max = number;
        line.erase(0, pos + 1);
        pos = line.find(' ');
      }
      number = stod(line.substr(0, line.length()));
      if (number > max)
        max = number;
    }
    return max;
  }
  else
  {
    cout << "File not open";
  }
  in.close();
}

// min реализуй

double min(string fileName) {}

double arrage(string fileName)
{
  ifstream in(fileName);
  string line;
  double sum = 0;
  int amount = 0;
  double number = 0;
  int pos = 0;

  if (in.is_open())
  {
    while (getline(in, line))
    {
      // обработка случая когда в строке одно число
      if (line.find(' ') == -1 && line.length() > 0)
      {
        number = stod(line.substr(0, line.length()));
        sum += number;
        amount++;
      }
      // обработка ощего случая
      pos = line.find(' ');
      while (pos != string::npos)
      {
        number = stod(line.substr(0, pos));
        sum += number;
        amount++;
        line.erase(0, pos + 1);
        pos = line.find(' ');
      }
      // последнего числа
      number = stod(line.substr(0, line.length()));
      sum += number;
      amount++;
    }
    return sum / amount;
  }
  else
  {
    cout << "File not open";
  }
  in.close();
}


//нужная функция
void general(string fileName)
{
  ifstream in(fileName);
  string line;
  double sum = 0;
  double max = -INT_MAX;
  int amount = 0;
  int amountPlus = 0;
  double number = 0;
  int pos = 0;

  if (in.is_open())
  {
    while (getline(in, line))
    {
      if (line.find(' ') == -1 && line.length() > 0)
      {
        number = stod(line.substr(0, line.length()));
        sum += number;
        amount++;
        if (number > 0)
          amountPlus++;
        if (number > max)
          max = number;
      }
      pos = line.find(' ');
      while (pos != string::npos)
      {
        number = stod(line.substr(0, pos));
        sum += number;
        amount++;
        if (number > 0)
          amountPlus++;
        if (number > max)
          max = number;
        line.erase(0, pos + 1);
        pos = line.find(' ');
      }
      number = stod(line.substr(0, line.length()));
      sum += number;
      amount++;
      if (number > 0)
        amountPlus++;
      if (number > max)
        max = number;
    }
    cout << "Amount: " << amount << endl;
    cout << "Amount plus numbers: " << amountPlus << endl;
    cout << "Sum of numbers: " << sum << endl;
    cout << "Max numbers: " << max << endl;
    cout << "Arrage of numbers: " << sum/amount << endl;
  }
  else
  {
    cout << "File not open";
  }
  in.close();
}

int main()
{
  string fileName = "input.txt";
  cout << "Amount: " << amountNumber(fileName) << endl;
  cout << "Amount plus numbers: " << amountPlusNumber(fileName) << endl;
  cout << "Sum of numbers: " << sum(fileName) << endl;
  cout << "Max numbers: " << max(fileName) << endl;
  cout << "Arrage of numbers: " << arrage(fileName) << endl;

  cout << endl;
  general(fileName);
}