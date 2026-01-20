#include<iostream>
using namespace std;

class Digit_wallet{
    private:
        double balance;
        int transaction_count;
    public:

        Digit_wallet(){
            balance = 0;
            transaction_count = 0;
        }
        
        void addMoney(double amount){
            if(amount <= 0){
                cout<<"Invalid amount"<<endl;
            }
            else{
                balance += amount;
                transaction_count++;
            }
        }
        
        void pay(double amount){
            if(amount > balance && amount <= 0){
                cout<<"Invalid amount"<<endl;
            }
            else{
                balance -= amount;
                transaction_count++;
            }
        }

        double getBalance(){
            return balance;
        }


};

int main(){
    
}