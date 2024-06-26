#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice () {

    char player ;

    do {
    cout<<"Rock Paper and Scissors game!\n";
    cout<<"Choose one of the following:\n ";
    cout<<"*****************************\n";
    cout<< "'r' for Rock\n";
    cout<< "'p' for Paper\n";
    cout<< "'s' for Scissors\n";
    cin>> player;

    cin.clear();
    fflush(stdin);
    
    }
    while (player == 'r' && player == 'p' && player == 's');

return player;
}
char getComputerChoice () {

    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num){

        case 1 : return 'r';
        case 2 : return 'p';
        case 3 : return 's';
    }

return 0; 
}
void ShowChoice (char choice) {

    switch (choice){
    case 'r' : cout<<"Rock\n";
               break;
    case 'p' : cout<<"Paper\n";
               break;
    case 's' : cout<<"Scissors\n";
               break;
    }

}
void chooseWinner (char player , char computer ) {

    switch (player)
    {
    case 'r' : if (computer == 'r'){
                 cout<<"It's a tie!\n";
                }
                else if (computer == 'p'){
                cout<<"You lose!\n";
                }
                else {
                    cout<<"You win!\n";
                }
                break;
    case 'p' : if (computer == 'r'){
                 cout<<"You win!\n";
                }
                else if (computer == 'p'){
                cout<<"It's a tie!\n";
                }
                else {
                    cout<<"You lose!\n";
                }
                break;
    case 's' : if (computer == 'r'){
                 cout<<"You lose!\n";
                }
                else if (computer == 'p'){
                cout<<"You win!\n";
                }
                else {
                    cout<<"It's a tie!\n";
                }
                break;
    }
}

int main () {
    char player;
    char computer;

    player = getUserChoice();
    cout<<"Your choice : ";
    ShowChoice(player);

    computer = getComputerChoice();
    cout<<"Computer's choice: ";
    ShowChoice(computer);

   chooseWinner(player, computer);


    return 0;
}