#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int yourmove;
    cout<<"Lets play rock,paper,scissors\n";
    while(true)
    {
        cout<<"Choose your move (1=rock,2=paper,3=scissors)\n";
        cin>>yourmove;
        if(yourmove<1||yourmove>3)
        {
            cout<<"Invalid input!!. Enter 1=rock,2=paper,3=scissor\n";
            continue;
        }
        int computermove=rand()%3+1;
        cout<<"computer move ="<<computermove<<"\n";
        if(yourmove==computermove)
        {
             cout<<"its a tie !! yourmove="<<yourmove<<" and computer move="<<computermove<<"\n";
        }
        if(yourmove==1&&computermove==3||yourmove==2&&computermove==1||yourmove==3&&computermove==2)
        {
             cout<<"You won against computer, congragulations !!, yourmove="<<yourmove<<" and computer move="<<computermove<<"\n";
        }
        if(yourmove==3&&computermove==1||yourmove==1&&computermove==2||yourmove==2&&computermove==3)
        {
            cout<<"Sorry !! computer won against you yourmove="<<yourmove<<" and computer move="<<computermove<<"\n";
        }
        break;
    }
    cout<<"Thankyou for playing\n";
}    
