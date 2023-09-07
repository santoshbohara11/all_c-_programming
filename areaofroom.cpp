//WAP to calculate the area of room using the class and arry object
#include<iostream>
using namespace std;

class room{
   private:
	float l;
	float b;;
	float area;
   public:
   	 void getdata()
   	 {
   	    cout<<"enter the length and breadth of room:";
		cin>>l>>b;	
	 }
	 void calculate()
	 {
	 	area =l*b;
	 }
	 void showresult()
	 {
	 	cout<<"area ="<<area<<endl;
	 }
};
int main ()
{
	room obj[3];
	int i=0;
	for (i=0;i<3;i++)
	{
		cout<<"enter the details of room:"<<i+1<<endl;
		obj[i].getdata();
		obj[i].calculate();
		
	}
	for (i=0;i<3;i++)
	{
		obj[i].showresult();
	}
	return 0;
	
}
