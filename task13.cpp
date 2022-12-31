#include<iostream>
using namespace std;

void sleepwell(float holidays);

main()
{
while(true)
{
	float holidays;
	cout<<"Enter the number of holidays: ";
	cin>>holidays;
	


	sleepwell(holidays);
}


}

void sleepwell(float holidays)
{
	float working_days = 365 - holidays;
	float timeforgame = (working_days * 63 + holidays * 127);
	float difference = (30000 - timeforgame);
	float inhours = (difference / 60) ;
	
	if(30000 > timeforgame)
	{
		cout<<"Tom sleeps well. "<<endl;
		cout<<"Total minutes is: "<<difference<<endl;
		cout<<"In Hours: "<<inhours<<endl;
	}

	if(30000 < timeforgame)
	{
		cout<<"Tom will run away."<<endl;
		cout<<"Total minutes is: "<<difference<<endl;
		cout<<"In Hours: "<<inhours<<endl;
	}

	


}