#include<iostream>
using namespace std;
 int main()
{
    int n,i,sum=0;
    cout<<"Enter the length ";
    cin>>n;
    for(i=1;i<=n;i++)
   {
    sum=sum+i;
   }
    cout<<"Sum="<<sum;
    return 0;
}
