#include <iostream>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computers choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}
char getUserChoice(){
    char player;
    cout << "Rock-Paper-Scissors\n";

    do{
        cout << "Choose one of the following\n";
        cout << "*******************\n";
        cout << "'R' for Rock\n";
        cout << "'P' for Paper\n";
        cout << "'S' for Scissors\n";
        cin >> player;
    }while(player != 'R' && player != 'P' && player != 'S');
    
    return player;
}
char getComputerChoice(){
    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'R';
        case 2: return 'P';
        case 3: return 'S';
    }
    return 0;
}
void showChoice(char choice){
    switch(choice){
        case 'R': cout << "Rock\n";
            break;
        case 'P': cout << "Paper\n";
            break;
        case 'S': cout << "Scissors\n";
            break;
    }
}
void chooseWinner(char player, char computer){
    switch(player){
        case 'R':   if (computer == 'R'){
            cout << "It's a tie\n";
        }else if(computer == 'P'){
            cout << "You Lose\n";
        }else{
            cout << "You Win";
        }
        break;
        case 'P':   if (computer == 'P'){
            cout << "It's a tie\n";
        }else if(computer == 'S'){
            cout << "You Lose\n";
        }else{
            cout << "You Win";
        }
        break;
        case 'S':   if (computer == 'S'){
            cout << "It's a tie\n";
        }else if(computer == 'R'){
            cout << "You Lose\n";
        }else{
            cout << "You Win";
        }
        break;
    }
}