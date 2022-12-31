#include<iostream>
using namespace std;

void isequal(int num1, int num2);

main()
{
while(true){
	int num1,num2;
	cout<<"Enter number 1: ";
	cin>>num1;
	cout<<"Enter number 2: ";
	cin>>num2;


	isequal(num1, num2);
}

}
void isequal(int num1, int num2)
{
	if(num1 == num2)
	{
		cout<<"Entered numbers are equal: "<<"("<<num1<<","<<num2<<")"<<endl;
	}
	if(num1 != num2)
	{ 
		cout<<"Entered numbers are not equal: "<<"("<<num1<<","<<num2<<")"<<endl;	
	}

}