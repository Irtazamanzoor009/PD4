#include<iostream>
using namespace std;

void reverse(string name);

main()
{
while(true)
{
	string name;
	cout<<"Enter true or false: ";
	cin>>name;
	
	reverse(name);
}

}

void reverse(string name)
{
	if(name == "true")
	{
		cout<<"False"<<endl;
	}
	if(name == "false")
	{
		cout<<"True"<<endl;
	}
	


}