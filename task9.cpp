#include <iostream>
using namespace std;
main()
{
    int num;
    num=-1;
    while(num<=0)
    {
        cout<<" Enter a number ";
        cin>>num;
        cout<<" Error ! Insert a number greater than zero "<<endl;
    }
}
