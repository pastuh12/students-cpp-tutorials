#include <iostream>
#include <string>
using namespace std;
void LOL(string name, string surname, int age);
class Children
{
private:
    string name;
    string surname;
    int age;
public:
    Children(string name, string surname, int age)
    {
        this->name = name;
        this->surname = surname;
        this->age = age;
        cout << this->name << endl << this->surname << endl << this->age;
    }
};
int main() {
    Children child = Children("Alex", "Margenal", 12);
    Children("dsd", "wedcd", 12);
    return 0;
}
// #include <iostream>
// using namespace std;
// int main() {
//     int V, T, count;
//     if (V > 0) 
//     {
//         for (int i = 0; i <= T; i++) 
//         {
//             count += V;
//         }

//     }
//         return 0;
// }