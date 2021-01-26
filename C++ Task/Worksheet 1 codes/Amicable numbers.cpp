
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    int i,n1,n2,sum1=0,sum2=0;

    cout<<"Enter two numbers"<<endl;
    cin>>n1>>n2;

    for(i=1;i<=n1/2;i++)
    {
        if(n1%i==0)
            sum1 = sum1 + i;

    }

    for(i=1;i<=n2/2;i++)
    {
        if(n2%i==0)
            sum2 = sum2 + i;
    }


    if(sum1==n2 && sum2==n1)
        cout<<"Numbers are amicable"<<endl;
    else
        cout<<"Numbers are not amicable"<<endl;

    return(0);
}

