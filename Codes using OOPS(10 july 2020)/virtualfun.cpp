#include<iostream>
using namespace std;
class Sub 
{
    public:
    virtual void show() 
    {
        cout << "\n  Show the Sub class:";
    }

    void display() 
    {
        cout << "\n  Display the Sub Class:";
    }
};

class Inherit : public Sub 
{
     public:
     void display() 
     {
        cout << "\n  Display Inherit class:";
     }

    void show() 
    {
        cout << "\n  Show the Inherit class:";
    }
};

int  main() 
{
    Sub obj1;
    Sub *p;
    cout << "\n\t P denotes to the Sub Class:\n";

    p = &obj1;
    p->display();
    p->show();

    cout << "\n\n\t This P denotes  to the inherit class:\n";
    Inherit obj2;
    p = &obj2;
    p->display();
    p->show();
    return 0;
}
