#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X= x;
 coordinates.Y= y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
main()
{
    int num;
    int x=9;
    int y=3;
    system("cls");
    cout<<" Enter the extreme end of your counting ";
    cin>>num;
    int i;
    i=0;
    cout<<" Counting with the while loop "<<endl;
    while(i<=num)
    {
        gotoxy(x,y);
        cout<<i<<endl;
	i++;
        y++;
    }
    cout<<" Counting with the for loop "<<endl;
    for(i=0;i<=num;i++)
    {    
         y++;
         gotoxy(x,y);
         cout<<i<<endl;
	 
    }	 

}