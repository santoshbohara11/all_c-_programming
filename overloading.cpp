/*WAP to convert
a.dollar into nepali
b. celcius into fahernheit
c.km to m*/

#include<iostream>
using namespace std;
void convert(int a,float b)
{
	float nrs;
	nrs=132*b;
	cout<<endl<<"the nepali amount is:"<<nrs;
}
void convert(float x ,int b)
{
	float f;
	f=(x*1.8)+32;
	cout<<endl<<"the fahernheit is: "<<f;
}
void convert(float a)
{
	float m;
	m=a*1000;
	cout<<endl<<"the meter is:"<<m;
}
int main()
{
	int dollar;
	float celcius;
	float km;
	int choice;
	char press;
	label:
	cout<<"*****MENU*****";
	cout<<endl<<"1.dollar into nepali";
	cout<<endl<<"2.celcius to fahernheit";
	cout<<endl<<"3.km to meter";
	cout<<endl<<"4.exit";
	cout<<endl<<"enter your choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:
		    cout<<"enter the dollar:";
		    cin>>dollar;
		    convert(dollar);
		    
			break;
		case 2:
			cout<<"enter the celcius:";
			cin>>celcius;
			convert(celcius);
			
			break;
		case 3:
			cout<<"enter the km:";
			cin>>km;
			convert(km);
			
			break;
		case 4 :
			exit(0);
			
			break;
		default :
			{
				cout<<"the choice is not valid"<<endl;
				goto label;
			}
	}
	cout<<endl<<"do you want to tary again?pres Y to conform";
	cin>>press;
	if(press=='y'||press=='Y')
	{
		goto label;
	}
	return 0;
	
}
