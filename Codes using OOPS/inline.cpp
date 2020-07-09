#include<iostream>
using namespace std;
class inline1 
{
public:
       inline float div(float a, float b) 
    {
        return (a / b);
    }
       inline float mul(float a, float b) 
    {
        return (a * b );
    }
};

    int main() 
{
    inline1 obj;
    float n1, n2;
    cout << "Enter any two nos:";
    cin >> n1>>n2;
    cout << "\n Division value is:" << obj.div(n1, n2);
    cout << "\n\nMultiplication value is:" << obj.mul(n1,n2);
    return 0;
}
