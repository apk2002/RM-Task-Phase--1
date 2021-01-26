#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i=0;
    char a[25],*ptr;

    cout<<"Enter the string"<<endl;
    gets(a);

    ptr=a;

    while(*ptr != '\0')
    {
        ptr++;
        i++;
    }

    cout<<"length of string is "<<i;
    return(0);
}
