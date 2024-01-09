#include<iostream>
using namespace std;
int main()
{
  int i,j,k,m,n;
  cout<<"Enter an integer\n";
  cin>>n;
  for(i=0;i<n;i++)
  {
    cout<<"|";
  }
  for(j=0;j<n-2;j++)
  {
    cout<<"\n|";
    for(k=0;k<n-2;k++)
    {
       cout<<" ";
    }
    cout<<"|";
  }
  cout<<"\n";
  for(m=0;m<n;m++)
  {
      cout<<"|";
  }
  
}