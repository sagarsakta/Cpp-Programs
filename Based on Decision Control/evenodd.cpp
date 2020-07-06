#include<iostream>
using namespace std;
int main()
{
    int n, rem;
    cout << "Enter any  number : ";
    cin >> n;
    rem = n % 2;
    if (rem == 0)
        cout << n << " is an even integer " << endl;
    else
        cout << n << " is an odd integer " << endl;
    return 0;
}
