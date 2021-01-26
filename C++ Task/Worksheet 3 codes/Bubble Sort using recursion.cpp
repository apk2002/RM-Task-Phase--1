#include<iostream>
#include<iomanip>

using namespace std;

void bubble_sort(int a[], int n)
{
    int i,temp;
    if(n>0)
    {
        for (i = 0; i < n-1; i++)

          if (a[i]>a[i+1])
             {
              temp=a[i];
              a[i]=a[i+1];
              a[i+1]=temp;
             }
        bubble_sort(a, n - 1);
    }

}

int main()
{
    int n,i;
    cout<<"Enter the number of elements in the array : "<<endl;
    cin>>n;

    int a[n];

    cout<<"Enter the elements of the array : "<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];

    bubble_sort(a,n);
    cout<<" Array Elements after bubble sort are: ";
     for(i=0;i<n;i++)
        cout<<setw(8)<<a[i];

return 0;
}
