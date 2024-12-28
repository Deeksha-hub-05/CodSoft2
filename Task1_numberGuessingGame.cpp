#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));//seeds the random number generator
    int randomNumber=rand()%100+1;//generates a random number between 1 and 100
    int guess;
    cout<<"Debug: Random Number="<<randomNumber<<endl;
    cout<<"Guess the number between 1 and 100: ";
    cout<<endl;
    while(true)
    {
        if (!(cin>>guess)){
            cout<<"Invalid input.Please enter a number.\n";
            cin.clear();//clear error flags
            cin.ignore(1000,'\n');//ignore invalid input
            continue;
        }
            if(guess<1||guess>100)
            {
                cout<<"Please guess a number between 1 to 100.\n";
                continue;
            }

        
        if (guess<randomNumber){
            cout<<"Too low! Try again"<<endl;

        }else if (guess>randomNumber){
            cout<<"Too high! try again"<<endl;
        }else{
            cout<<"Correct! You guessed The number"<<endl;
            break;
        }
    }
return 0;

}
