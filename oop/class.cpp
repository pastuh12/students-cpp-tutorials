#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string name;
    int age;
    void move()
    {
        cout << name << " is moving" << endl;
    }

    void greeting()
    {
        cout << "Name: " << this->name << "\tAge: " << this->age << endl;
    }
};

class Person2
{
private:
    string name;
    int age;

public:
    // Person2(string name, int age)
    // {
    //     this->name = name;
    //     this->age = age;
    // }
    // Person2(string name)
    // {
    //     this->name = name;
    // }
    Person2(string name, int age) : name(name), age(age)
    {
    }

    // Person2(string n, int a) : name(n), age(a)
    // {
    // }

    void move()
    {
        cout << name << " is moving" << endl;
    }

    void greeting()
    {
        cout << "Name: " << this->name << "\tAge: " << this->age << endl;
    }
};

int main()
{
    Person person;
    person.name = "Tom";
    person.age = 22;

    person.greeting();
    person.move();

    Person2 person2 = Person2("Ivan", 18);

    person2.greeting();
    person2.move();

    return 0;
}