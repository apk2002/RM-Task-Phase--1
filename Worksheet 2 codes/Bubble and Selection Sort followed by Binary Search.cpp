#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>

using namespace std;

void bubble(int [], int);
void selection(int [], int);
void bs(int [], int);
int main()
{
    int choice,a[100],n,i,j,ele;

    cout<<"Enter the number of elements in the array"<<endl;
    cin>>n;

    cout<<"Enter the elements of the array"<<endl;
      for(i=0;i<n;i++)
        cin>>a[i];

    while(1)
    {
    cout<<" Choose one of the following "<<endl<<"1. B "<<endl<<"2. S "<<endl<<" 3. exit "<<endl;  // b = bubble sort and s = selection sort
    cin>>choice;

    switch(choice)
    {
    case 1 :
         bubble(a,n);
         cout<<"Enter search element for binary search"<<endl;
         cin>>ele;
         bs(a,n);
           break;

    case 2 :
        selection(a,n);
        cout<<"Enter search element for binary search"<<endl;
         cin>>ele;
         bs(a,n);
           break;

    case 3 : exit(0);


    default :
        cout<<"Invalid Input"<<endl;
    }
    }
    return(0);
}

void bubble(int a[], int n)
{
    int i,j,temp;

     for(i=0;i<n-1;i++)
     {
        for(j=0;j<n-1-i;j++)
     {
         if(a[j]>a[j+1])
         {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;

         }
     }
     }

     cout<<"Sorted array in ascending order"<<endl;
     for(i=0;i<n;i++)
        cout<<setw(8)<<a[i];
        cout<<endl;
}

void selection(int a[], int n)
{
    int i,j,pos,small;

    for(i=0;i<n-1;i++)
    {
       pos=i;
       small=a[i];
       for(j=i+1;j<n;j++)
       {
           if(small>a[j])
           {
            pos = j;
           small =a[j];
           }
       }
       a[pos] = a[i];
       a[i] = small;

    }
    cout<<"Sorted array in ascending order"<<endl;
     for(i=0;i<n;i++)
        cout<<setw(8)<<a[i];
        cout<<endl;

}

void bs(int a[], int n)
{
    int pos=-1,b=0,e=n-1,ele,m;

    while(b<=e)
    {
        m=(b+e)/2;

        if(a[m]==ele)
        {
            pos = m;
            break;
        }
        else if(ele>a[m])
            b = m+1;
        else
            e = m-1;

    }

    if(pos>=0)
    {
        cout<<"Position of search element (as per computer) "<<ele<<" is "<<pos<<endl;
        cout<<"Position of search element (as per user) "<<ele<<" is "<<++pos<<endl;
    }
    else
        cout<<"Search element not found"<<endl;

}
