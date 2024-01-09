#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
  int i,j,n,x;
  cout<<"Enter no of elements\n";
  cin>>n;
  int a[n];
  cout<<"Enter array elements\n";
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"Enter an integer to check whether is there any sum of two digits for the entered element\n";
  cin>>x;

  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]+a[j]==x)
      {
        cout<<"Yes!! there is two integer which sum up to give "<<x<<" and they are "<<a[i]<<" and "<<a[j]<<"\n";
        exit(0);
      }
    }
  }
  cout<<"No!! there is no such elements which sum up to give "<<x<<" as an integer\n";
}