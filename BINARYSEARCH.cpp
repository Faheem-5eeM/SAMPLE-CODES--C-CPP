#include <iostream>
using namespace std;
class Solution 
{
  public:
    int binarysearch(int arr[], int n, int k) 
    {
      int left = 0;
      int right = n - 1;
      while (left <= right) 
      {
          int mid = left + (right - left) / 2;
          if (arr[mid] == k)
          {
              return mid; // Element found, return its index.
          } 
          else if (arr[mid] < k) 
          {
              left = mid + 1; // Search in the right half.
          } 
          else 
          {
              right = mid - 1; // Search in the left half.
          }
      }
      return -1; // Element not found.
    }
};
int main() 
{
  int N;
  int i;
  cout<<"Enter the number\n";
  cin >> N;
  int arr[N];
  cout<<"Enter the elements\n";
  for(i = 0; i < N; i++)
  {
    cin >> arr[i];
  } 
  cout<<"Entered Elements are\n";
  for(i=0;i<N;i++)
  {
    cout<<arr[i]<<"\t";
  }
  cout<<"\n";
  int key;
  cout<<"Enter the key to be searched\n";
  cin >> key;
  Solution ob;
  int found = ob.binarysearch(arr, N, key);
  cout << found <<" is the index at which key is found"<< endl;
  if(found == -1)
  {
    cout<<"-1 => shows that the mentioned key is not found in the list of elements\n";
  }
}
