#include <iostream>
using namespace std;
class Person
{
    public:
    int age;
    string name;
    Person(): name("Sagar"), age(16) { }
    void display()
        {
             cout << "My name is: " << name << endl;
             cout << "My age is: " << age << endl;
            
        }
        
};
class Teacher : public Person
{
    public:
       void fun1() 
    { 
    cout << "I can teach Anything." << endl; 
    }
};
int main()
{
     Teacher teacher1;
     teacher1.name = "Harish";
     teacher1.age = 34;
     teacher1.display();
     teacher1.fun1();

return 0;
}
