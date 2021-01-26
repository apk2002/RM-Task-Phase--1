#include <iostream>
using namespace std;

int Binary_Search(int arr[], int num, int beg, int end)
{
 int mid;

 if (beg > end)
  {
  cout << "Number "<<num<<" is not found"<<endl;
  return 0;
  }
 else
  mid = (beg + end) / 2;

  if(arr[mid] == num)
    {
   cout << "Number "<<num<<" is found at " << mid << " index"<<endl;
   return 0;
    }

   else if (num > arr[mid])
   Binary_Search (arr, num, mid+1, end);

   else if (num < arr[mid])
   Binary_Search (arr, num, beg , mid-1);

 }


int main()
{
 int arr[150], num, i, n;

 cout <<"Enter the length of the array: "<<endl;
 cin >> n;

 cout <<"Enter the elements in sorted array: "<<endl;
 for(i=0; i<n; i++)
  cin >> arr[i];


 cout <<"Enter the search element: "<<endl;
 cin >> num;

 int beg = 0,end = n-1;

 Binary_Search (arr, num, beg, end);

 return 0;
}
