
#include<iostream>
#include<conio.h>

using namespace std;


int main()
{

char a[30],temp;
    int n,i,j;

    cout<<"Enter the number of characters in string"<<endl;
    cin>>n;

    cout<<"Enter a string"<<endl;
    for( i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
    {

        for(j=1;j<n-i;j++)
        {
            if(a[j]<a[j-1])
            {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
        cout<<a[i];

     return(0);


}
