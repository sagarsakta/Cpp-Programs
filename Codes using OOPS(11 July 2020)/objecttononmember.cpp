#include <iostream>
using namespace std;
class Print
{
	private:
        int n1;
		
	public:
	void setNum(int n)
	{
		n1 = n;
	}
	
	int getNum(void)
	{
		return n1;
	}
};
void Fun1(class Print n2, int number)
{ 
	n2.setNum(number); 
	cout<<"The value is: " << n2.getNum() << endl;
}
int main()
{ 
	int n1; 
	Print objn2;
        n1 = 55;
        Fun1 (objn2, n1);
	return 0;
}
