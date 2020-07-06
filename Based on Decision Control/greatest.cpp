#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout<<"Enter your first number:"; 
    cin>>n1;
    cout<<"Enter your second number:"; 
    cin>>n2;
    if(n1>n2)
    {
	cout<<"First no "<<n1<<" is greater";
    }
    else
    {
	cout<<"Second no "<<n2<<" is greater";
    }
    return 0;
}
