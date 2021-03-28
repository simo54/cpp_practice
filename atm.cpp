#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void welcomeMenu();
void user_input();

int main()
{
    int option;
    double user_balance = 3000, amount;


    do{
        // Initialize Menu
        welcomeMenu();
        cout<<" OPTION: ";
        cin >> option;

        switch (option) {
            case 1: 
                if(user_balance > 0){
                    cout<<" Insert the amount to withdraw: ";
                    cin >> amount;
                    
                }
                else{
                    cout<<"Not enough funds";
                }
                break;
            case 2:
                cout<<"case2";
                break;
            case 3:
                cout<<"Current Balance is: "<<user_balance<<endl;
                break;
            case 4:
                cout<<"case4";
                break;
            default:
        break;
    }

    } while(option!=5);
    
    cin.get();
    return 0;
}

void welcomeMenu(){
    cout<<" ================= NATIONAL BANK ================= "<<endl;
    cout<<" 1. Cash Withdraw "<<endl;
    cout<<" 2. Deposit "<<endl;
    cout<<" 3. Account Balance "<<endl;
    cout<<" 4. Paying bills  "<<endl;
    cout<<" 5. Quit "<<endl;
    cout<<" ================================================= "<<endl;
}