#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
  string name;
  string place;
  int marks[5] = {};

public:
  void setName()
  {
    string value;
    cout << "Enter name: ";
    cin >> value;
    cout << endl;
    if (value != "")
      name = value;
    else
      throw invalid_argument("ERROR");
  }
  void setPlace()
  {
    string value;
    cout << "Enter place: ";
    cin >> value;
    cout << endl;
    if (value != "")
      place = value;
    else
      throw invalid_argument("");
  }
  void setMarks()
  {
    for (int i = 0; i < 5; i++)
    {
      cout << "Enter mark: ";
      cin >> this->marks[i];
      cout << endl;
    }
  }
  void printInfo()
  {
    cout << name << endl
         << place << endl;
    printMarks();
  }
  void printMarks()
  {
    for (int i = 0; i < 5; i++)
    {
      cout << marks[i] << " ";
    }
  }
  string getName()
  {
    return this->name;
  }
  Student()
  {
    setName();
    setPlace();
    setMarks();
    printInfo();
  }
};
class Student_group
{
private:
  int amount;
  string groupName;
  Student member[100];

public:
  void setMember()
  {
    cout << "Enter amount members: ";
    cin >> amount;
    for (int i = 0; i < amount; i++)
    {
      member[i] = Student();
    }
  }
  void setGroupName()
  {
    cout << "Enter group name: ";
    string value;
    cin >> value;
    cout << endl;
    if (value != "")
      groupName = value;
    else
      throw invalid_argument("");
  }

  Student_group()
  {
    this->setGroupName();
    this->setMember();
  }
  void printMemebrs()
  {
    for (int i = 0; i < amount; i++)
    {
      member[i].printInfo();
    }
  }
};

int main()
{

  Student_group group = Student_group();
  group.printMemebrs();
  return 0;
}