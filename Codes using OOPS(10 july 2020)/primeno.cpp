#include<iostream>
using namespace std;
class primeno 
{
    int a, key;
     int i;
public:
     primeno(int b) 
{
        a = b;
}

void calculate() 
{
  key = 1;
{
  for (i = 2; i <= a / 2; i++)
  if (a % i == 0) 
{
   key = 0;
   break;
} 
else 
{
 key = 1;
}
}
}
void show() 
  {
    if (key == 1)
    cout << "\n" << a << " is Prime Number.";
    else
    cout << "\n" << a << " is Not Prime Number.";
   }
};
int main() 
{
    int a;
    cout << "Enter any  Number:";
    cin>>a;
    primeno obj(a);
    obj.calculate();
    obj.show();
    return 0;
}
