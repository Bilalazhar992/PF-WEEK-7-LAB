#include <iostream>
using namespace std;
main()
{
    int length;
    cout<<" Enter desired length ";
    cin>>length;
    int n1;
    int n2;
    n1=0;
    n2=1;
    int upcoming;
    cout<<n1<<", "<<n2<<", ";
    for(int i=1;i<=(length-2);i++)
    {
        upcoming=n1+n2;
        cout<<upcoming<<", ";
        n1=n2;
        n2=upcoming;
    }
}