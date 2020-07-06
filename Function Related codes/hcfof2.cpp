#include<iostream>
using namespace std;
void gcdof(int,int);
 int main()
{
    int x,y;
    cout<<"Enter your 1st number : ";
    cin>>x;
    cout<<"\nEnter your 2nd number : ";
    cin>>y;
    gcdof(x,y);
    return 0;
}
 void gcdof(int x,int y)
{
    int a,b;
 
    a=x;
    b=y;
 
    while(a!=b)
  {
    if(a>b)
    a=a-b;
     else
     b=b-a;
   }
 cout<<"\n hcf of "<<x<<" and "<<y<<" is : "<<a<<"\n";
}

