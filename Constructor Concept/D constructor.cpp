#include <iostream>
using namespace std;
class Student
{
public:
   char ch;
   int n;
   Student() 
   {
     ch = 'S';
     n= 55;
   }
};
int main()
{
   Student obj;
   cout<<"ch:"<<obj.ch<<endl;
   cout<<"n:"<<obj.n;
   return 0;
}
