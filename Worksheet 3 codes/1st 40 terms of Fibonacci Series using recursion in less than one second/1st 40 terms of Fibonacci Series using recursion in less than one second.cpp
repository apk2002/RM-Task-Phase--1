#include <iostream>
using namespace std;

int fib(int x)
{
   if((x==1)||(x==0))
      return(x);
   else
      return(fib(x-1)+fib(x-2));
}

int main()
{
   cout<<"First 40 terms of Fibonacci Series"<<endl;
   for(int i=0;i<40;i++)
    cout<<"  "<<fib(i);

  return(0);
}
