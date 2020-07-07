#include <iostream>
using namespace std;
int main()
{
int  n1 = 0, n2 = 1, n3 = 0,a;
cout << "Enter the number of terms: ";
 cin >> a;
cout << "This is a series: ";
for (int i = 1; i <= a; ++i)
{
if(i == 1)
{
cout << " " << n1;
continue;
}
if(i == 2)
{
cout << n2 << " ";
continue;
}
n3 = n1+ n2;
n1 = n2;
n2 = n3;
cout << n3 << " ";
}
return 0;
}
