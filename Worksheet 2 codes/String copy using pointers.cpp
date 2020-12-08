#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    char s[100],d[100],*ptr;
    int i=0;
    cout<<"Enter a string"<<endl;
    gets(s);

    ptr=s;

    while(*ptr !='\0')
    {
        d[i]=s[i];
        i++;
        ptr++;

    }

    cout<<"Original string : "<<puts(s)<<endl;
    cout<<"Copied string : "<<puts(d)<<endl;
    return(0);
}
