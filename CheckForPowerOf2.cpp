#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter An integer to check whether the given no is power of 2 or not\n";
  cin>>n;
  if(n==0)
  {
    cout<<"Not a power of 2\n";
    exit (0);
  }
  
  while(n!=1)
  {
    if(n%2!=0)
    {
      cout<<"Not a power of 2\n";
      exit(0);
    }
    n=n/2;
  }
  cout<<"Given no is a Power of 2\n";
}




/*ORRRRRR


#include<iostream>
using namespace std;

bool isPowerofTwo(int n) {
  if (n == 0) {
    return false;
  }

  while (n != 1) {
    if (n % 2 != 0) {
      return false;
    }
    n = n / 2;
  }
  return true;
}

int main() {
  int num;
  cout << "Enter an integer to check whether it is a power of 2 or not: ";
  cin >> num;

  if (isPowerofTwo(num)) {
    cout << "Given number is a power of 2\n";
  } else {
    cout << "Given number is not a power of 2\n";
  }

  return 0;
}



*/