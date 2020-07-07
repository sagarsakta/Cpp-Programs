# include <iostream>
using namespace std;
int main()
{
float n1, n2;
char a;
cout << "Enter operator either + , - , * , / ";
cin >> a;
cout << "Enter any two operands: ";
cin >> n1 >> n2;
switch(a)
{
case '+':
cout << n1+n2;
break;
case '-':
cout << n1-n2;
break;
case '*':
cout << n1*n2;
break;
case '/':
cout << n1/n2;
break;
default:
cout << "Error any  operator is not matched";
break;
}
return 0;
}
