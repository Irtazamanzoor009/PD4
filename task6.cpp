#include<iostream>
#include<windows.h>
using namespace std;

void printA();
void printW();
void printA1();
void printI();
void printS();
void gotoxy(int x, int y);

main()
{
system("cls");


	printA();
	printW();
	printA1();
	printI();
	printS();



}

void printA()
{
gotoxy(20,2); cout<<"      # ";
gotoxy(20,3); cout<<"     # #";
gotoxy(20,4); cout<<"    #   #";
gotoxy(20,5); cout<<"   #######";
gotoxy(20,6); cout<<"  #       #";
gotoxy(20,7); cout<<" #         #";
gotoxy(20,8); cout<<"#           #";
}

void printW()
{
gotoxy(18,10); cout<<"#                 # "<<endl;
gotoxy(18,11); cout<<" #       ##      #"<<endl;
gotoxy(18,12); cout<<"  #     #  #    #"<<endl;
gotoxy(18,13); cout<<"   #   #    #  #"<<endl;
gotoxy(18,14); cout<<"    # #      ##"<<endl;
}

void printA1()
{
gotoxy(21,16); cout<<"      # ";
gotoxy(21,17); cout<<"     # #";
gotoxy(21,18); cout<<"    #   #";
gotoxy(21,19); cout<<"   #######";
gotoxy(21,20); cout<<"  #       #";
gotoxy(21,21); cout<<" #         #";
gotoxy(21,22); cout<<"#           #";
}

void printI()
{
gotoxy(21,24); cout<<"########### "<<endl;
gotoxy(21,25); cout<<"     #      "<<endl;
gotoxy(21,26); cout<<"     #       "<<endl;
gotoxy(21,27); cout<<"     #       "<<endl;
gotoxy(21,28); cout<<"     #       "<<endl;
gotoxy(21,29); cout<<"     #        "<<endl;
gotoxy(21,30); cout<<"###########     "<<endl;
}

void printS()
{
gotoxy(23,32); cout<<"###### "<<endl;
gotoxy(23,33); cout<<"#       "<<endl;
gotoxy(23,34); cout<<"#        "<<endl;
gotoxy(23,35); cout<<"######    "<<endl;
gotoxy(23,36); cout<<"     #     "<<endl;
gotoxy(23,37); cout<<"     #     "<<endl;
gotoxy(23,38); cout<<"######      "<<endl;

}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}





