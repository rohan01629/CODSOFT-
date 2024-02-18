#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main(){
    cout<< "\n\t\t-------------------Welcome to the Number Guessing Game-----------------\n"<<endl;
    cout<<"\n\t\t----->>>You will have to guess a number between 1 to 100";
    cout<<"\n\t\t----->>>Lets start playing and Best of Luck"<<endl;

    srand(time(0));
    int randNumber = ( rand() %100) + 1;
    cout<< "\n you will have total 5 chances to guess the correct number\n";
    int chanceLeft = 5;
    int PlayerInput;

    for (int i = 1;i <= 5;i++)
    {
        cout<<"\n--->Enter the number: ";
        cin>>PlayerInput;
        if(PlayerInput == randNumber){
            cout<<"\nCongrats!!.You have Successfully guessed the right number\n";
            cout<<"\nThanks for playing.Have a nice Day";
            break;
        }
        else
        {
            if(PlayerInput > randNumber)
            {
                cout<<"\n Insert a smaller Number.Try Again"<<endl;
            }
            else
            {
                cout<<"\n[Insert a larger Number.Try Again]"<<endl;

            }

        }
        chanceLeft--;
        cout<<"\n(Chances Left to guess the Random Number:"<<chanceLeft<<")"<<endl;
        if(chanceLeft == 0)
        {
            cout<<"\nSorry your chance has been finished to guess the random number\n"<<endl;
            cout<<"The random Number was :"<<randNumber<<endl;
            cout<<"Thanks for playing have a nice day:";
        }
    }
    cout<<"\n";
    return 0;

    }

