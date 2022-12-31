#include<iostream>
using namespace std;

void speed(int num1);

main()
{
while(true)
{
	int num1;
	cout<<"Enter speed: ";
	cin>>num1;

	speed(num1);
}



}

void speed(int num1)
{
	if(num1 > 100)
	{
		cout<<"Halt...YOU WILL BE CHALLENGED!!!"<<endl;
	}
	if(num1 < 100)
	{
		cout<<"Percect! You're going good."<<endl;
	}
	if(num1 == 100)
	{
		cout<<"Percect! You're going good."<<endl;
	}

}