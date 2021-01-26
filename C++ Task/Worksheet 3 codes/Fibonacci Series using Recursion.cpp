#include <iostream>

using namespace std;

int fib(int f)
{
   if((f==0)||(f==1))
       return(f);

   else
      return(fib(f-1)+fib(f-2));
}


int main()
{
   int f;

   cout << "Enter the number of terms of series : "<<endl;
   cin >> f;

   cout << "Fibonnaci Series : "<<endl;

   for(int i=0;i<f;i++)
        cout <<"         "<< fib(i);

return 0;
}
