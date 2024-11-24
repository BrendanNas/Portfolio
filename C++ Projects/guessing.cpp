#include <iostream>
#include <ctime>

using namespace std;

int main(){
    
    int num;
    int guess;
    int tries = 10;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "***** WHATS THAT NUMBER *****\n";
    cout << "You have " << tries << " to guess with\n";

    do{
        cout << "Enter a guess between (1-100): ";
        cin >> guess;

        if(guess > num){
            tries = tries - 1;
            cout << "Too High! You have: " << tries << " left\n";
        }
        else if(guess < num){
            tries = tries - 1;
            cout << "Too Low! You have: " << tries << " left\n";
        }
        else{
            tries = tries -1;
            cout << "CORRECT!\n"; 
            cout << "You managed to win with only " << tries << " tries left, way to go!\n";
        }
        if(tries == 0){
            cout << "Game Over. Try Again\n";
        }
        cin.clear();
        fflush(stdin);
    }while (guess != num);

    cout << "********** THANKS FOR PLAYING ********";
    
    return 0;
}