//Given an array a of integers of length n, find the nearest smaller number for every element such that the smaller element is on left side.If no small element present on the left print -1.

/*  a = [4, 5, 2, 10, 8]


For the first element 4, there is no smaller element on its left, so you print -1.
For the second element 5, the nearest smaller element on its left is 4.
For the third element 2, the nearest smaller element on its left is -1 because there is no smaller element.
For the fourth element 10, the nearest smaller element on its left is 2.
For the fifth element 8, the nearest smaller element on its left is 5.
So, the final output should be:


OUTPUT:
-1 4 -1 2 5  

*/


#include <bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    vector<int> leftSmaller(int n, int a[])
    {
        vector<int> result(n, -1); // Initialize the result vector with -1
        for(int i=0;i<n;i++)
        {
           cout<<a[i]<<"\t";
        }
        cout<<"\n";

        for(int i = 1; i < n; i++)
        {
            int j = i - 1;
            while (j >= 0 && a[j] >= a[i]) 
            {
                j--;
            }
            if (j >= 0)
            {
                result[i] = a[j];
            }
        }
        return result;
    }
};
int main()
{
        int n;
        cout<<"Enter the no of elements in an array\n";
        cin>>n;
        int a[n];
        cout<<"Enter the array Elements\n";
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<"\t";
        cout<<endl;
    
        return 0;
}