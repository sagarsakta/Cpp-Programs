#include <iostream>
using namespace std;

class IntFloat
{
    private:
        int s1;
        float s2;

    public:
       
       void fun1(int d)
       {
          s1 = d;
          cout << "Number: " << s1;
        }

       float fun2()
       {
           cout << "\nEnter data: ";
           cin >> s2;
           return s2;
        }
};

 int main()
 {
      IntFloat  o1, o2;
      float obj2;

      o1.fun1(55);
      obj2 = o2.fun2();

      cout << "You entered " << obj2;
      return 0;
 }
