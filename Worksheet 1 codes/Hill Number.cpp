#include <iostream>
#include<conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
int num,rem=0,a[150],n=0,i,j,k,l,counter,peak;

cout << "Enter a number"<<endl;
cin >> num;

for(i=1;i<=100 && num!=0;i++)
    {
    rem=num%10;
    a[i]=rem;
    num=num/10;
    n++;
    }


for(j=1;j<=n;j++)
    {
    if(a[j]==a[j+1])
        {
        cout << "The number is not a hill number"<<endl;
        exit(0);
        }
    }

if(a[1]>a[2] || a[n-1]<a[n])
    {
    cout << " The number is not a hill number"<<endl;
    exit(0);
    }

for(k=1;k<=n;k++)
    {
    if(a[k]<a[k+1])
        continue;
    else
        {
        peak=k;
        break;
        }
    }

for(l=peak;l<n;l++)
    {
    if(a[l]>a[l+1])
        counter=1;
    else
       {
        counter=0;
        break;
       }
    }

if(counter==0)
    cout << "The number is not a hill number"<<endl;
if(counter==1)
    cout << "The number is a hill number"<<endl;
}
