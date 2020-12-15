
#include <iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;


 int digit(int num)
{

   if (num <= 0)
       return 0;
   else
       return ( num % 10) + digit( num / 10);
}

int main()
{
    int n,sum1;

   cout << "Enter a number"<<endl;
   cin >> n;
   int x=n;


   sum1 = digit(n);
   cout << "Sum of digits of a number using recursion         : "<<n<<" is " <<sum1<<endl;



int rem=0,sum2=0;


        while(n!=0)
        {
            rem = n%10;
            sum2 = sum2 + rem;
            n = n/10;
        }

     cout<< "Sum of digits of a number without using recursion : "<<x<<" is " <<sum2<<endl;

}
