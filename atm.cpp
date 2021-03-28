#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;

void welcomeMenu();
void user_input();

int main()
{
    int option;
    double user_balance = 100, amount;

    do{
        welcomeMenu();
        cout<<"OPTION: ";
        cin >> option;

        switch (option) {
            case 1: 
                if(user_balance > 0){
                    cout<<"Insert the amount to withdraw: "<<endl;
                    cin >> amount;
                    if(amount > user_balance)
                        cout<<"Amount exceeds current balance, please try again"<<endl;
                    else
                        user_balance-=amount;
                }
                else{
                    cout<<"Not enough funds to withdraw"<<endl;
                }
                break;
            case 2:
                cout<<"Write amount to deposit"<<endl;
                cin >> amount;
                if(amount < 0)
                    cout<<"Import must be over more than 0, please try again"<<endl;
                else
                    user_balance += amount;
                break;
            case 3:
                cout<<"Current Balance is: "<<user_balance<<endl;
                break;
            case 4:
                cout<<"Service Currently Unavailable"<<endl;
                break;
            default:
                cout<<"Unexpected Error, please try again"<<endl;
                break;
        }
    } while(option!=5);
    
    return 0;
}

void welcomeMenu(){
    cout<<"================= NATIONAL BANK ================="<<endl;
    cout<<"1. Cash Withdraw "<<endl;
    cout<<"2. Deposit "<<endl;
    cout<<"3. Account Balance "<<endl;
    cout<<"4. Paying bills  "<<endl;
    cout<<"5. Quit "<<endl;
    cout<<"================================================="<<endl;
}