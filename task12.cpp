#include<iostream>
using namespace std;

void total(float redrose, float whiterose, float tulips, float finalresult);

main()
{
while(true)
{
	float redrose, whiterose, tulips, finalresult;
	cout<<"Enter number of red rose: ";
	cin>>redrose;
	cout<<"Enter number of white rose: ";
	cin>>whiterose;
	cout<<"Enter number of tulips: ";
	cin>>tulips;

	total(redrose, whiterose, tulips, finalresult);
}
}

void total(float redrose, float whiterose, float tulips, float finalresult)
{
	float price = (redrose*2) + (whiterose*4.1) + (tulips*2.5);
	if(price > 200)
	{
		float result = price * 0.2;
		float finalresult = price - result;
		cout<<"Original Price: "<<price<<endl;
		cout<<"Price after Discount: "<<finalresult<<endl;
	}
	if(price < 200)
	{
		cout<<"Price is: "<<price<<endl;
	}





}