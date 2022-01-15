#include <iostream>
using namespace std;

void showSelection();

int main() {
    // check balance, deposit, withdraw, show menu
    int select;
    double balance = 50;
    
    do{
        showSelection();
        cout << "Select : ";
        cin >> select;
        
        switch (select) {
            case 1:cout << "Balance is : $" << balance << endl; break;
            case 2:cout << "Deposit Amount : $";
                double depositAmount;
                cin >> depositAmount;
                balance += depositAmount;
                break;
            case 3:cout << "Withdraw Amount : $";
                double withdrawAmount;
                cin >> withdrawAmount;
                if (withdrawAmount <= balance) {
                    balance -= withdrawAmount;
                }else {
                    cout << "Not Enough Money" << endl;
                }
            break;
        }
        }while (select != 4) ;
    }

void showSelection(){
    cout<<"---Selection---" <<endl;
    cout<<" 1. Check balance"  <<endl;
    cout<<" 2. Deposit"  <<endl;
    cout<<" 3. Withdraw"  <<endl;
    cout<<" 4. Exit"  <<endl;
    cout<<"----------------"  <<endl;
}
