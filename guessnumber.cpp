#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int secretnumber=rand()%100+1;
    int attempt=0;
    int guess;
    cout<<"Welcome to number guessing challenge\n";
    cout<<"I am thinking of a number between 1-100 and u need to guess them\n";
    while(true)
    {
        cout<<"Enter your guess\n";
        cin>>guess;
        attempt++;
        if(guess>secretnumber)
        {
            cout<<"too high!! guess any lower number\n";
        }
        else if(guess<secretnumber)
        {
            cout<<"too low!! guess any higher number\n";
        }
        else
        {
            cout<<"Congragulations !! you guessed it right in "<<attempt<<" attempt\n";
            break;
        }
    }
}