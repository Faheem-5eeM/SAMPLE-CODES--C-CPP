#include<iostream>
#include<stdlib.h>
using namespace std;
void check(int arr[],int n)
{
    int natural=0;
    for(int i=0;i<n;i++)
    {
      natural=natural+arr[i];
    }
    int left = 0;
    for(int i=0;i<n;i++)
    {
      natural = natural - arr[i];
      if(natural == left)
      {
        cout<<"Left and right are equal and the sum is:"<<i+1<<"\n";
        exit(0);
      }
      left = left +arr[i];
    }
    cout<<"Left and right are not equal (This also might be because of not having any mid point).\n";
}
int main()
{
  int n,i;
  cout<<"enter no of elements\n";
  cin>>n;
  int arr[n];
  cout<<"Enter array elements\n";
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Array elements are\n";
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<"\t";
  }
  cout<<"\n";
  check(arr,n);
  return 0;
}