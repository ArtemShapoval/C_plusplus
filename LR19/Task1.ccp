#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

void print(const Person* person)
{
    cout << person->name << " is " << person->age << " years old" << endl;
}

int main()
{
    // Створення об'єктів класу Person
    Person person1;
    person1.name = "Artem";
    person1.age = 18;

    Person person2;
    person2.name = "Denys";
    person2.age = 18;

    Person person3;
    person3.name = "Vlad";
    person3.age = 18;

    // Виклик функції print для кожного об'єкта
    print(&person1);
    print(&person2);
    print(&person3);

    return 0;
}
