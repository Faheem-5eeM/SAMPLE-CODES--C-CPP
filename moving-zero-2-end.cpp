#include<iostream>
using namespace std;
int main()
{
  int n,i;
  cout<<"Enter no of elements\n";
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
  int nonZeroIndex = 0;

  // Traverse the array and move non-zero elements to the front
  for (i = 0; i < n; i++) 
  {
    if (arr[i] != 0) 
    {
      arr[nonZeroIndex] = arr[i];
      // If the current index is not the non-zero index, set the current index to zero
      if(i != nonZeroIndex) 
      {
        arr[i] = 0;
      }
      nonZeroIndex++;
    }
  }
  cout<<"After arranging array elements are\n";
  for(i=0;i<n;i++)
	{
	  cout<<arr[i]<<"\t";
	}
  cout<<"\n";
}