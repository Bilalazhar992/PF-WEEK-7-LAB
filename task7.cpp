#include <iostream>
using namespace std;
int sum(int);
main()
{
    int num;
    int result;
    cout<<" Enter Number ";
    cin>>num;
    result=sum(num);
    cout<<" Display "<<result;
}
int sum(int num)
{
    int summation;
    summation=0;
    while(num!=0)
    {
      summation=num%10+summation;  
      num=num/10;
    }
    return summation;
}