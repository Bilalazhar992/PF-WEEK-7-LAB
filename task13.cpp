#include <iostream>
using namespace std;
void print_percentage(int number);
float p1,p2,p3,p4,p5;
int i;
int n;
main()
{
    
    int num;
    p1=0;
    p2=0;
    p3=0;
    p4=0;
    p5=0;
    i=1;
    cout<<" How many numbers you want to enter: ";
    cin>>n;
    cout<<" Enter number ";
    while(i<=n)
    {
        cin>>num;
        print_percentage(num);
        i++;
    }
}
    void print_percentage(int num)
    {
        if(num<200)
        {
            p1++;
        }
        if(num>=200 && num<400)
        {
            p2++;
        }
        if(num>=400 && num<600)
        {
            p3++;
        }
        if(num>=600 && num<800)
        {
            p4++;
        }
        if(num>=800)
        {
            p5++;
        }
        if(i==n)
        {
            p1=(p1/n)*100;
            cout<<"Percentage of numbers between less 200 "<<p1<<endl;
            p2=(p2/n)*100;
            cout<<"Percentage of numbers between less 400 "<<p2<<endl;
            p3=(p3/n)*100;
            cout<<"Percentage of numbers between less 600 "<<p3<<endl;
            p4=(p4/n)*100;
            cout<<"Percentage of numbers between less 800 "<<p4<<endl;
            p5=(p5/n)*100;
            cout<<"Percentage of numbers between greater 800 "<<p5<<endl;
        }
    }
    

