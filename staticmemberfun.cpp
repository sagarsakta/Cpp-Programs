#include <iostream>
#include <string.h>
using namespace std;
class Print
{
	private:
                static int count;
		char str[50];
		
	public:
		Print()
		{
			count++;
		}
		
		void countMessage(char s[])
		{
			strcpy(str,s);
		}
		void printMessage(void)
		{
			cout << str << endl;

		static int Objectcount(void)
		{
			return count;
		}
};

int  Print::count =0;
int main()
{
	Print x;
	Print y;
	Print z;
	
	x.countMessage("First");
	y.countMessage("Second");
	z.countMessage("Third");
	
	x.printMessage();
	y.printMessage();
	z.printMessage(); 
	cout << "Total objects created: " << Print::Objectcount() << endl;
	
	return 0;
}
