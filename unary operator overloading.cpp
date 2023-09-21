//unary operator overloading
#include<iostream>
using namespace std;

class Czer{
	private:
		int a;
	public:
		Czer()//creating a constructor
		{
			a=10;
		}
		void operator ++()//creating a operator
		{
			a=a+5;
		}
	    void showvalue()
	    {
	    	cout<<"the value of a is "<<a;
		}
};
int main()
{
	Czer obj1;
	++obj1;
	obj1.showvalue();
	return 0;
}
