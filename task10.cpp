#include<iostream>
using namespace std;

void country(string name, float amount, float result, float paidamount);

main()
{
while(true)
{
	float amount, result, paidamount;
	string name;

	cout<<"Enter a country name: ";
	cin>>name;
	cout<<"Enter ticket price: ";
	cin>>amount;

	country(name,amount,result,paidamount);
}


}

void country(string name, float amount, float result, float paidamount)
{
	if(name == "pakistan")
	{
		result = amount * 0.05;
		paidamount = amount - result;
		
		cout<<"Amount to be paid is: "<<paidamount<<endl;
	}
	if(name == "ireland")
	{
		result = amount * 0.1;
		paidamount = amount - result;
		
		cout<<"Amount to be paid is: "<<paidamount<<endl;
	}
	if(name == "india")
	{
		result = amount * 0.2;
		paidamount = amount - result;
		
		cout<<"Amount to be paid is: "<<paidamount<<endl;
	}
	if(name == "england")
	{
		result = amount * 0.3;
		paidamount = amount - result;
		
		cout<<"Amount to be paid is: "<<paidamount<<endl;
	}
	if(name == "canada")
	{
		result = amount * 0.45;
		paidamount = amount - result;
		
		cout<<"Amount to be paid is: "<<paidamount<<endl;
	}
}