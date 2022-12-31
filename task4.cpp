#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x , int y);
void gamemaze();
void move(int x, int y);


main()
{
	system("cls");
	gamemaze();
	int x=8;
	int y=3;
while(true)
{
	move(x,y);

	if(x < 50)
	{
		x=x+1;
		
	}
	if(x == 50)
	{
		gotoxy(x-1, y);
		cout<< " ";
		x=8;
		
		
		
	}
}
	gotoxy(0,20);



}

void gamemaze()
{
cout<<" ################################################### "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" #                                                 # "<<endl;
cout<<" ################################################### "<<endl;

}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void move(int x, int y)
{
	gotoxy(x-1, y);
	cout<<" ";
	gotoxy(x,y);
	cout<<"P";
	Sleep(50);


}