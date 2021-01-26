#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>

using namespace std;




class matrix
{
private:
     int i,j,m,n,p,q,a[50][50],b[50][50],c[50][50];


public:
    void getdata();
    void multiply();
    void transpose();

};

void matrix :: getdata()
{
    cout<<"Enter the no. rows and columns for 1st matrix"<<endl;
    cin>>m>>n;

    cout<<"Enter the no. rows and columns for 2nd matrix"<<endl;
    cin>>p>>q;

     cout<<"Enter elements of 1st matrix"<<endl;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
           cin>>a[i][j];

    cout<<"Enter elements of 2nd matrix"<<endl;
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
           cin>>b[i][j];
}

void matrix :: multiply()
{
     if(n!=p)
    {
        cout<<"Matrices are not compatible"<<endl;
        exit(0);

    }


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
            cout<<setw(4)<<c[i][j];
            cout<<endl;
       }


}

void matrix :: transpose()
{

     int t1[50][50],t2[50][50];

     for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            t1[j][i] = a[i][j];

     cout<<"The transpose of 1st matrix is "<<endl;

     for(i=0;i<n;i++)
     {
        for(j=0;j<m;j++)
            cout<<setw(4)<<t1[i][j];
            cout<<endl;
     }

     for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            t2[j][i] = b[i][j];

     cout<<"The transpose of 2nd matrix is "<<endl;

     for(i=0;i<n;i++)
     {
        for(j=0;j<m;j++)
            cout<<setw(4)<<t2[i][j];
            cout<<endl;
     }


}

int main()
{
    matrix ma;
    ma.getdata();
    ma.multiply();
    ma.transpose();

    return(0);
}

