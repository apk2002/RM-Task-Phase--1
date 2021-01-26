#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

void ascending(string s[], int len[], int n)
{
    int i,j,temp;
    string ts;

     for(i=0;i<n;i++)
     {
         for(j=0;j<n-1;j++)
         {
             if(len[j+1]>len[j])
             {
                 ts=s[j];
                 s[j]=s[j+1];
                 s[j+1]=ts;

                 temp=len[j];
                 len[j]= len[j+1];
                 len[j+1]=temp;
             }
         }
     }

     for(i=0;i<n;i++)
        cout<<s[i]<<endl;
}

void sorting(string s[],int len[],int n)
{
    int i,j,k;
    string a;
     char temp;

    for(i=0;i<n;i++)
    {
        a = s[i];

        for(j=0;j<len[i];j++)
        {

            for(k=0;k<len[i]-1;k++)
            {
                if((int)a[k]>(int)a[k+1])
                {

                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
                }

            }
        }
           s[i]=a;

    }

    for(i=0;i<n;i++)
        cout<<s[i]<<endl;
}

int main()
{
    int n,i;
    cout<<"Enter the number of words"<<endl;
    cin>>n;

    int len[n];
    string str[n];

    cout<<"Enter the words"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>str[i];
        len[i] = str[i].length();
    }
        cout<<"Words in increasing order of length"<<endl;
        ascending(str,len,n);

        cout<<"Words in alphabetical order"<<endl;
        sorting(str,len,n);
}
