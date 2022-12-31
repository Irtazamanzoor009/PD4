#include<iostream>
#include<windows.h>
using namespace std;

void gamemaze();
void gotoxy(int x, int y);
void move(int x, int y);


main()
{
system("cls");
	int x = 20;
	int y = 2;
	gamemaze();
while(true)
{
	move(x,y);
	if(y < 10)
	{
		y = y+1;
	}


	if(y == 10)
	{ 
		gotoxy(x,y-1);
		cout<<" ";
		y=2;
			
	}
	


}

gotoxy(0,22);
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
	gotoxy(x,y-1);
	cout<<" ";
	gotoxy(x,y);
	cout<<"P";
	Sleep(200);

}

