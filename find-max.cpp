
#include <iostream>
using namespace std;
class bank{
    private: 
    string holder;
    string accountNo;
    float balance;
    public:
    void CreateAccount(){
        cout<<"Enter holder name :";
        cin>>holder;
        
        cout <<"Enter account no";
        cin>>accountNo;
        
        cout<<"Enter balance";
        cin>>balance;
    }
    void deposite(){
        int amount;
        cout<<"Enter deposite amount"<<endl;
        cin>>amount;
        if(amount>0){
            balance+=amount;
            cout<<"\ndeposite"<<amount<<"succfully!"<<endl;
        }
        else{
            cout<<"\nInvlid amount"<<endl;
        }
    }
    void Withdraw(){
        int amount;
        cout<<"enter withdraw amout"<<endl;
        cin>>amount;
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<"Withdraw"<<amount<<"succfully"<<endl;
        }
        else{
            cout<<"Enter valid amount"<<endl;
        }
    }
    void checkBalance(){
        cout<<"Accout Holder:"<<holder<<endl;
        cout<<"Account No:"<<accountNo<<endl;
        cout<<"Current balance is:"<<balance<<endl;
    }
};

int main()
{
bank A1;
A1.CreateAccount();
int choice;
do{
    cout<<"<\n---Bank Management Menu--->\n";
    cout<<"1.check balance\n";
    cout<<"2.Withdraw money\n";
    cout<<"3.deposite money\n";
    cout<<"4.exit\n";
    cout<<"Enter your choice";
    cin>>choice;
    
    switch(choice){
        case 1:
        A1.checkBalance();
        break;
        case 2:
        A1.Withdraw();
        break;
        case 3:
        A1.deposite();
        break;
        case 4:
        cout<<"Thakyou for using survice "<<endl;
        break;
        default:
        cout<<"Invalid choice please try again"<<endl;
    }
  }  while(choice!=4);
    return 0;
}
