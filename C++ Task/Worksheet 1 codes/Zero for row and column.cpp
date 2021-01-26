
#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
    int m,n,i,j,a[30][30],a1[30][30],a2[30][30],r[30],c[30],k,l;

   cout<<"Enter the number of rows and columns for the matrix"<<endl;
   cin>>m>>n;

   cout<<"Enter the elements of the matrix"<<endl;
     for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];

    for(i=0;i<m;i++)                 //duplicate of matrix a
        for(j=0;j<n;j++)
            a1[i][j]=a[i][j];

      for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            a2[i][j]=a[i][j];


   for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                k=i;
                l=j;
            }
        }

   for(i=k,j=0;j<n;j++)    //row zeros
        a1[i][j]=0;

   for(j=l,i=0;i<m;i++)   //column zeros
        a2[i][j]=0;

   cout<<"The modified matrix is "<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            cout<<setw(4)<<(a1[i][j]+a2[i][j])-a[i][j];
            cout<<endl;
    }

    return(0);

}


