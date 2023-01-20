#include <iostream>
using namespace std;
float money_checker(int,float,int);
int birthday_gift;
int number_toys;
main()
{
    int age;
    float machine;
    number_toys=0;
    birthday_gift=0;
    float result;
    float gift_price;
    int n;
    cout<<" Enter Lilly Age ";
    cin>>age;
    cout<<" Enter price of machines ";
    cin>>machine; 
    int i;
    i=1;
    while(i<=age)
    {
        if(i%2==0)
        {   
  	    n=i/2;
            birthday_gift=birthday_gift+10*n;
            birthday_gift--;
        }
        else
        {
            number_toys++;
        }
        i++;
    }
    cout<<" Number of toys she got "<<number_toys<<endl;
    cout<<" Enter Price of unit gift ";
    cin>>gift_price;
    result=money_checker(age,machine,gift_price);
    if(result>0)
    {
        cout<<" Yes! Lilly can purchase that machine "<<endl;
        cout<<" She still has "<<result<<" rupees left ";
    }
    if(result<0)
    {
        cout<<" No! Lilly cannot purchase that machine "<<endl;
        cout<<" She need "<<-(result)<<" ruppes more for buying that that machine ";
    }
    

}
float money_checker(int age,float machine,int gift_price)
{
    float saved_money;
    float comparison;
    saved_money=birthday_gift+gift_price*number_toys;
    comparison=saved_money-machine;
    return comparison;
}
