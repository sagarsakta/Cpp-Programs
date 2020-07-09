#include<iostream>
using namespace std;
class Parameter 
{
int a, b;
public:
Parameter(int x, int y) 
{
     a = x;
     b = y;
     cout << "This is Constructor\n";
}

void Display() 
{
cout << "Values :" << a << "\t" << b;
}
};

int main() 
{
    Parameter Obj(2,3);
    Obj.Display();
    return 0;
}
