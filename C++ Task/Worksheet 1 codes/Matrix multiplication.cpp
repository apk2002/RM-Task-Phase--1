
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int main()

{


    int i,j,m,n,p,q,a[50][50],b[50][50],c[50][50];

    cout<<"Enter the no. rows and columns for 1st matrix"<<endl;
    cin>>m>>n;

    cout<<"Enter the no. rows and columns for 2nd matrix"<<endl;
    cin>>p>>q;

    if(n!=p)
    {
        cout<<"Matrices are not compatible"<<endl;
        exit(0);

    }

    cout<<"Enter elements of 1st matrix"<<endl;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
           cin>>a[i][j];

    cout<<"Enter elements of 2nd matrix"<<endl;
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
           cin>>b[i][j];


   for(i=0;i<m;i++)
   {
       for(j=0;j<q;j++)
       {


        c[i][j]=0;

           for(int k=0;k<n;k++)
             c[i][j] = c[i][j] +(a[i][k] * b[k][j]);

       }

   }

    cout<<"The product matrix is "<<endl;
       for(i=0;i<m;i++)
       {
           for(j=0;j<q;j++)
           {


            cout<<setw(4)<<c[i][j];
            cout<<endl;
           }
       }

return(0);

}
