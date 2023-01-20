#include <iostream>
using namespace std;
int lcm(int,int,int);
int gcd(int,int);
main()
{
   int num1;
   int num2;
   int result;
   cout<<" Enter first number ";
   cin>>num1;   
   cout<<" Enter second number ";
   cin>>num2;
   result=gcd(num1,num2);
   cout<<" Greatest common divisible= "<<result<<endl;
   result=lcm(num1,num2,result);
   cout<<" Least Common Multiple = "<<result<<endl;     
}
int gcd(int num1,int num2)
{
    int comparison;
    if(num1>num2)
    {
        comparison=num2;
    }
    if(num2>num1)
    {
        comparison=num1;
    }
    int i;
    i=comparison;
    while(i>=1)
    {
        if(num1%i==0 && num2%i==0)
        {
            return i;
        }
        else
        {
            i--;
        }
       
    }
}
int lcm(int num1,int num2,int result)
{
        int calculate;
        calculate=(num1*num2)/result;
        return calculate;    
}