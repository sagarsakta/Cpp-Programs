#include<iostream>
class Rectangle
{
   int a, b;
   public:
   void set_data (int,int);
   int area (void)
       {
            return (a*b);
       }
};
    void Rectangle::set_data (int x, int y)
       {
            a=x;
            b=y;
       }
void main ()
{
   Rectangle r;
   r.set_data (3,4);
   cout << "Area is :" << r.area();

}
