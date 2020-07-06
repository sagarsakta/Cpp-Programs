#include <iostream>
using namespace std;
 int main() 
{
   int  i,n;
   cout << "Enter any positive no: ";
   cin >> n;
   bool isPrime = true;
   for (i = 2; i <= n / 2; ++i) 
  {
   if (n % i == 0) 
   {
        isPrime = false;
         break;
      }
   }
   if (isPrime)
      cout << n << " is a prime number";
   else
      cout << n << " is not a prime number";
   return 0;
}
