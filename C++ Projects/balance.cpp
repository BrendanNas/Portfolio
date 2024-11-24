#include <iostream>
#include <iomanip>

using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 123.04;
    int choice = 0;

    do{
        cout << "**************\n";
        cout << "Enter your choice:\n";
        cout << "**************\n";
        cout << "1. Show Balance\n";
        cout << "2. Make a Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cin >> choice;

        cin.clear();
        fflush(stdin);

        switch(choice){
            case 1: showBalance(balance);
                    break;
            case 2: balance += deposit();
                    showBalance(balance);
                    break;
            case 3: balance -= withdraw(balance);
                    showBalance(balance);
                    break;
            case 4: cout << "Thanks for visiting";
                    break;
            default: cout << "Invalid Choice\n";
        }
    }while(choice != 4);
    return 0;
}
void showBalance(double balance){
        cout << "Your balance is: $"<< setprecision(2)<< fixed << balance << '\n';
}
double deposit(){
    double amount = 0;

    cout << "How much do you want to deposit: ";
    cin >> amount;
    if(amount > 0){
        return amount;
    }else{
        cout << "Invalid Amount\n";
        return 0;
    }
}
double withdraw(double balance){
    double amount = 0;

    cout << "How much do you wanna withdraw: ";
    cin >> amount;

    if(amount > balance){
        cout << "Insufficient Funds\n";
        return 0;
    }
    else if(amount < 0){
        cout << "Invalid Amount\n";
        return 0;
    }
    return amount;
}
