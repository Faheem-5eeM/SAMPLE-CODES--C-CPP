#include<iostream>
#include<stdlib.h>
using namespace std;
double nCr(int n, int r)
{
    double result1 = 1.0;
    for(int i=1;i<=n;i++)
    {
      result1 *= i;
    }
    double result2 = 1.0;
    for(int i=1;i<=r;i++)
    {
      result2*= i;
    }

    double result3 = n-r;
    double result4 = 1.0;
    for(int i=1;i<=result3;i++)
    {
      result4 *= i;
    }
    return (result1/(result2*result4));  // Formula : (n!/(r!*(n-r)!))
}

int main()
{
   int n,r;
   cout<<"Enter value for N and R to calculate nCr:\n";
   cin>>n>>r;
   cout<<"N: value is = "<<n<<" and R: value is = "<<r;
   if(r>n)
   {
     cout<<"\nCalculation is not possible since R is Greater than N\n";
     exit(0);
   }
   cout<<"The calculated value is : "<<nCr(n,r);
}