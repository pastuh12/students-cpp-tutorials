#include <iostream>
#include <string>

using namespace std;

class Dog
{
private:
    string name;
    int age;
    bool hasLogHair;
    double health;

    string getStatusHealth()
    {
        if (this->health > 80)
        {
            return "Здоров";
        }
        else
        {
            return "Не здоров";
        }
    }

public:
    Dog(string name = "Dog", int age = 0, bool hasLongHair = true, float health = 100)
    {
        this->name = name;
        this->age = age;
        this->hasLogHair = hasLogHair;
        this->health = health;
    }

    void say()
    {
        cout << name << age << hasLogHair << health << endl;
    }

    void sayHealthStatus()
    {
        cout << "Здоровье: " << this->getStatusHealth() << endl;
    }
};

class Cat
{
private:
    string name;
    int age;
    bool hasLogHair;
    double health;

    string getStatusHealth()
    {
        if (this->health > 60)
        {
            return "Здоров";
        }
        else
        {
            return "Не здоров";
        }
    }

public:
    Cat(string name = "Cat", int age = 0, bool hasLongHair = true, float health = 100)
    {
        this->name = name;
        this->age = age;
        this->hasLogHair = hasLogHair;
        this->health = health;
    }

    void say()
    {
        cout << name << age << hasLogHair << health << "\n Myuuuea" << endl;
    }

    void sayHealthStatus()
    {
        cout << "Здоровье: " << this->getStatusHealth();
    }
};

int main()
{
    setlocale(LC_ALL, "Russia");
    Dog dog = Dog();
    Cat cat = Cat();

    dog.say();
    dog.sayHealthStatus();

    cat.say();
    cat.sayHealthStatus();


    return 0;
}