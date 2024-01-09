#include <iostream>
using namespace std;
class Solution
{
	public:
	void shuffleArray(int arr[],int n)
	{
    int result[n];

    // Initialize indices for the a and b groups
    int aIndex = 0, bIndex = n / 2;

    // Iterate through the original array
    for (int i = 0; i < n; i++) 
    {
        // Place the elements at even indices in the 'a' group
        if (i % 2 == 0) 
        {
            result[i] = arr[aIndex++];  //it'll not increment now itself , instead it'll increment just after this calculation
        }
        // Place the elements at odd indices in the 'b' group
        else 
        {
            result[i] = arr[bIndex++];  //it'll not increment now itself , instead it'll increment just after this calculation
        }
    }

    // Copy the rearranged elements back to the original array
    for (int i = 0; i < n; i++) 
    {
        arr[i] = result[i];
    }

	}
};

//{ Driver Code Starts.


int main() 
{
    	int n;
      cout<<"Enter the no of elements in an array\n";
      cout<<"NOTE: Enter Only Even Numbers\n";
	    cin>>n;
      int i;
	    int a[n] ;
      cout<<"Enter the Array elements\n";
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
      cout<<"BEFORE SHUFFLING ARRAY ELEMENTS ARE\n";
      for(i=0;i<n;i++)
      {
        cout<<a[i]<<"\t";
      }
      cout<<"\n";
      Solution ob;
      ob.shuffleArray(a, n);
      

      cout<<"AFTER SHUFFLING ARRAY ELEMENTS ARE\n";
		  for (int i = 0; i < n; i++) 
			cout<<a[i]<<"\t";
      cout<<"\n";
	     
      return 0;
}
