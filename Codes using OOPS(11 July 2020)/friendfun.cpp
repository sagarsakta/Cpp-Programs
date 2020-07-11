#include <iostream>
using namespace std;
class Demo
{
    private:
    int a;
    public:
    void findNumber(int x);
    friend void printNum(Demo NUM);
};
void Demo::findNumber(int x)
{
    a=x;
}
void printNum(Demo NUM)
{
    cout << "Value of a given no is: " << NUM.a;
 
}
 
int main()
{
    Demo Obj;
    Obj.findNumber(55);
    printNum(Obj);
    return 0;
}
