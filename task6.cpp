#include <iostream>
using namespace std;
int concentration(int,int);
main()
{
    int number;
    int digit;
    int result;
    cout<<" Enter Number ";
    cin>>number;
    cout<<" Enter Digit ";
    cin>>digit;
    result=concentration(number,digit);
    cout<<number<<" contains "<<digit<<"     "<<result<<" times";
}
int concentration(int number,int digit)
{
    int num1;
    int help;
    help=0;
    while(number!=0)
    {
     num1=number%10;
     number=number/10;
     if(num1==digit)
     {
        help++;
     }
    }
      return help ;
}
     		

	  

