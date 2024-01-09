#include<iostream>
using namespace std;
int main()
{
  int n,i;
  cout<<"Enter no of elements\n";
  cin>>n;
  int m=n-1;
  int arr[n];
  int arr2[n];
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
  
  for(i=0;i<n;i++)
	{
	  if(arr[i]!=0)
	  {
	      arr2[i]=arr[i];
	  }
	  else
	  {
	      arr2[m]=arr[i];
	      m=m-1;
	  }   
  }
  cout<<"After arranging array elements are\n";
  for(i=0;i<n;i++)
	{
	  cout<<arr2[i]<<"\t";
	}
  cout<<"\n";
}