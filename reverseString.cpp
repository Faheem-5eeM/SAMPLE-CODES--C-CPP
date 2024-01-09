#include<iostream>
#include<string.h>
using namespace std;
string reverse(string str)
{
        string reversedStr;
        for(int i = str.length() - 1; i >= 0; --i) 
        {
             reversedStr += str[i];
        }
        return reversedStr;
    
}
int main()
{
  string str;
  cout<<"Enter a word to find is reverse word\n";
  cin>>str;
  cout<<"The Reverse String is: "<<reverse(str);;
}