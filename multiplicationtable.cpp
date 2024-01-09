#include<iostream>
using namespace std;
int main()
{
    int product,i=1,n;
    cout<<"Enter the number to get the Multiplication Table\n";
    cin>>n;
    if(n>0)
    {
      while(i<11)
      {
        product = n*i;
        cout<<n<<"X"<<i<<"="<<product<<"\n"; 
        i++;
      }
    }
    else
    {
      cout<<"Cannot Get the Multiplication table for 0";
    }
}