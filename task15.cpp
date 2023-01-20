#include <iostream>
using namespace std;
float calculatePrice(int,int);
main()
{
    int inheritence_money;
    int stay_year;    
    cout<<" Enter money got from his parents ";
    cin>>inheritence_money;
    cout<<" Enter year until which he want to stay ";
    cin>>stay_year;
    float result;
    
    result=calculatePrice(inheritence_money,stay_year);
    
    if(result>0)
    {
        cout<<" He will need "<<result<<" Dollars more for survival ";
    }
    if(result<0)
    {
        cout<<" He will live a carefree free life  "<<-result<<" Dollars left  after  survival ";
    }
}
    float calculatePrice(int inheritence_money,int stay_year)
    {   
        int no_of_stay_year;
        no_of_stay_year=stay_year-1800;
        int i=0;
        int money1=0;
        int money2=0;
        int total_money;
        while(i<=no_of_stay_year)
       {
        if(i%2==0)
        {
          money1=12000+money1;
        }
        else if(i%2!=0)
        {
          money2=(12000+50*(18+i))+money2;
        }
	  total_money=money1+money2;
	i++;
       }
	int difference;
        
	difference=total_money-inheritence_money;
        return difference; 
    }