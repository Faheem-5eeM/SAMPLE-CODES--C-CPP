#include<iostream>
using namespace std;
int main()
{
  int num, reverseNum=0, originalNum , remainder;
  cout<<"Enter a number\n";
  cin>>num;
  originalNum = num;
  while(num!=0)
  {
       remainder = num%10;
       reverseNum = reverseNum*10+remainder;
       num = num/10;
  }     
  if(originalNum == reverseNum)
  {
    cout<<originalNum<<" is a PALINDROME";
  }
  else
  {
    cout<<originalNum<<" is NOT a PALINDROME";
  }
}