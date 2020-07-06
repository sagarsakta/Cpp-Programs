#include<iostream>
using namespace std;
void lcmof(int,int);
 int main()
{
    int x,y;
    cout<<"Enter your 1st number : ";
    cin>>x;
    cout<<"\nEnter your 2nd number : ";
    
    cin>>y;
    lcmof(x,y);
    return 0;
}
void lcmof(int x,int y)
{
    int a,b;
    a=x;
    b=y;
    while(a!=b)
    {
        if(a < b)
        {
        a=a+x;
        }
        else
        {
            b=b+y;
        }
    }
 
    cout<<"\n lcm of  "<<x<<"  and  "<<y<<"  is : "<<a<<"\n";
}
