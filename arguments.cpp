//default argument
#include<iostream>
using namespace std;
void sum(int a=10,int b=10, int c=10)
{
	int d=0;
	d=a+b+c;
	cout<<"sum ="<<d;
}
int main()
{
	sum(20,20,20);
	return 0;
}
