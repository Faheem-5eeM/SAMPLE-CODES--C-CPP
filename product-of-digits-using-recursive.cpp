#include<iostream>
using namespace std;
int main()
{
  int i,n,remainder=1,temp;
  cout<<"Enter an integer\n";
  cin>>n;
  temp=n;
  if(n>0)
  {
    while(temp>0)
    {
      remainder = remainder * (temp%10);
      temp = temp/10;
    }
    cout<<"The product is:"<<remainder;
  }
  else 
  {
    cout<<"Integer cannot be Zero";
  }
}
