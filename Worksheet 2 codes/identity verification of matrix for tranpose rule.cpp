#include <iostream>
using namespace std;

void multi(int a[100][100],int b[100][100],int c[100][100],int m,int n,int p,int q);
void transpose(int d[100][100],int dt[100][100],int x,int y);

int main()
{
int m,n,p,q,i,j,a[100][100],b[100][100],c[100][100],at[100][100],bt[100][100],ct[100][100],right[100][100],counter;

cout << "enter dimensions of first matrix"<<endl;
cin >> m>> n;

cout << "enter dimension of second matrix"<<endl;
cin >> p>>q;


if(n!=p)
    {
    cout << "Matrices are not compatible"<<endl;
    exit(0);
    }

cout << "enter elements for first matrix"<<endl;
for(i=0;i<m;i++)
    for(j=0;j<n;j++)
        cin >> a[i][j];


cout << "enter elements for second matrix"<<endl;
for(i=0;i<m;i++)
    for(j=0;j<n;j++)
        cin >> b[i][j];

cout<<"Product of first and second matrix is "<<endl;
multi(a,b,c,m,n,p,q);
for(i=0;i<m;i++)
    {
     for(j=0;j<q;j++)
        {
        cout << c[i][j] << " " ;
        }
    cout << "\n";
    }

cout<<"Transpose of product matrix is "<<endl;
transpose(c,ct,m,q);
for(i=0;i<m;i++)
    {
     for(j=0;j<q;j++)
        {
        cout << ct[i][j] << " " ;
        }
    cout << "\n";
    }

cout<<"Transpose of first matrix is "<<endl;
transpose(a,at,m,n);
for(i=0;i<m;i++)
    {
     for(j=0;j<n;j++)
        {
        cout << at[i][j] << " " ;
        }
    cout << "\n";
    }

cout<<"Transpose of second matrix is "<<endl;
transpose(b,bt,p,q);
for(i=0;i<p;i++)
    {
     for(j=0;j<q;j++)
        {
        cout << bt[i][j] << " " ;
        }
    cout << "\n";
    }

cout<<"Product of the transpose(second) and transpose(first) is "<<endl;
multi(bt,at,right,q,p,n,m);
for(i=0;i<q;i++)
    {
     for(j=0;j<m;j++)
        {
        cout << right[i][j] << " " ;
        }
    cout << "\n";
    }
for(i=0;i<m;i++)
    {
    for(j=0;j<q;j++)
        {
        if(ct[i][j]==right[i][j])
            counter=1;
        else
        counter=0;
        }
    }

if(counter==1)
    cout << "The identity is verified"<<endl;
else
    cout << "The identity is not verified"<<endl;

}

void multi(int a[100][100],int b[100][100],int c[100][100],int m,int n,int p,int q)
{
    int i,j,k;
for(i=0;i<m;i++)
    {
    for(j=0;j<q;j++)
        {
        c[i][j]=0;
        for(k=0;k<n;k++)
            {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }


}
void transpose(int d[100][100],int dt[100][100],int r,int c)
{
    int i,j;
for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        dt[j][i]=d[i][j];
        }
    }

}


