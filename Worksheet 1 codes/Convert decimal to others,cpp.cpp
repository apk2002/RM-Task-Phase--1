#include<iostream>
#include<conio.h>

using namespace std;


class convert
{
private:
    int n;

public:
    void getdata()
    {
       cout<<"Enter a decimal number"<<endl;
       cin>>n;
    }

    void dtb();
    void dto();
    void dthd();

};

void convert :: dtb()
{
int n1=n;
long double bin=0,rem=0,i=1;
    while(n1>0)
    {
        rem=n1%2;
        bin = bin + (rem*i);
        n1=n1/2;
        i=i*10;
    }
    cout<<"Binary equivalent of decimal number "<<n<<" is "<<bin<<endl;

}

void convert :: dto()
{
    int n2=n,oct=0,rem=0,i=1;

    while(n2>0)
    {
        rem=n2%8;
        oct = oct + (rem*i);
        n2=n2/8;
        i=i*10;
    }
    cout<<"Octal equivalent of decimal number "<<n<<" is "<<oct<<endl;

}

void convert :: dthd()
{
    int n3=n,rem=0;
     string hex_num;
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    while(n3>0)
    {
        rem = n3%16;
        hex_num=hex[rem] + hex_num;
        n3=n3/16;
    }

    cout<<"Hexadecimal equivalent of decimal number "<<n<<" is "<<hex_num<<endl;

}

int main()
{

    convert co;
    co.getdata();
    co.dtb();
    co.dto();
    co.dthd();
    return(0);

}
