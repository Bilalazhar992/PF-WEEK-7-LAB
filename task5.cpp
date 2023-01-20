#include <iostream>
using namespace std;
int result(int);
main()
{
    int num;
    int final;
    cout<<" Enter Number ";
    cin>>num;
    final=result(num);
    cout<<num<<" has "<<final<<" Digits ";
}
int result(int num)
{
    int numbering=0;
    while(num!=0)
    {
      num=num/10;		
      numbering++;  
    }
    return numbering;
}