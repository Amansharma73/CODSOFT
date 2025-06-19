#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(0));
    int secretNumber = rand() % 10 + 1;
    int guess;
    int attempts = 0;
     cout<< "Welcome to the Guess the Number Game!"<<endl;
     do{
        cout<<"Enter your guess(1-10):";
        cin >>guess;
        attempts++;
        if(guess < secretNumber){
            cout<<"Too low. try again!"<<endl;
        }
        else if(guess > secretNumber){
            cout<<"Too high. Try again!"<<endl;
        } else {
            cout<<"Congratulations! You You guessed the number in"<<attempts<<" <<attempts!"<<endl;
        
        }
} while ( guess !=secretNumber);
return 0;
}
        
     


