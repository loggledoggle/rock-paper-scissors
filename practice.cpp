#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
//rock paper scissors game

bool runAgain(void);
void gameCondition(string arg[]);


int main(void){
    srand(time(0));


    do {
     system("cls");

    string userput;
    const int n = 3;
    string a[n] = {"Rock", "Paper", "Scissors"};

    cout << "ROCK PAPER SCISSORS GAME." << endl;

    gameCondition(a);

}while (runAgain());
    
    return 0;
}


bool runAgain(void){

    char userChoice;
     cout << "Would you like to run again?";
     cin >> userChoice;
     cin.ignore();

     if(userChoice == 'y' || userChoice == 'Y'){

        return true;
     }
    return false;
}

void gameCondition(string arg[]){
    string argUser;
    string compChoice = arg[rand()%3];

    cout << "Let's play! Make your choice: ";
        cin >> argUser;
        cin.ignore();
    
         
        
if (argUser == "Rock" && compChoice == "Scissors") {

    cout << "You win!" << endl;
}else if (argUser == "Scissors" && compChoice == "Paper") {

    cout << "You Win!" << endl;
} else if (argUser == "Paper" && compChoice == "Rock"){

    cout << "You win!" << endl;
} else if (argUser == compChoice){

   cout << "It's a tie!" << endl;
}else{
   cout << "You lose!" << endl;
}

}