//WAP to add sum of two number using class and object
#include<iostream>
using namespace std;
class sum{
	private:
		int a;
		int b;
	    int c;
	public:
		void getdata()
		{
		   cout<<"enter the value of a and b"<<endl;
		   cin>>a>>b;  	
		}
		void add()
		{
			c=a+b;
		}
		void result()
		{
			cout<<"result="<<c;
		}
		
};
int main()
{
	sum test;
	test.getdata();
	test.add();
	test.result();
	return 0;
}
