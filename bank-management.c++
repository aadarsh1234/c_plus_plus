
#include <iostream>
using namespace std;
class BankAccount{
    private:
    string holder;
    string accountNo;
    float balance;
    public:
    void createAccount(){
        cout<<"Enter accout holder name:"<<endl;
        cin>>holder;
        
        cout<<"Enter account Number:"<<endl;
        cin>>accountNo;
        
        cout<<"Enter initial balance:"<<endl;
        cin>>balance;
    }
    void deposite(){
        float amount;
        cout<<"Enter amout to deposite";
        cin>>amount;
        if(amount>0){
            balance +=amount;
            cout<<"\nDeposited "<<amount<<" succesfully!"<<endl;
        }
        else{
            cout<<"\n invalid deposit!"<<endl;
        }
    }
    void withdraw(){
        float amount;
        cout<<"Enter amout to withdraw";
        cin>>amount;
        if(amount>0 && amount<=balance){
            balance -= amount;
            cout<<"withdraw "<<amount<<"succesfully!"<<endl;
        }
        else{
            cout<<"Insuffcient fund or invalid amout!"<<endl;
        }
    }
    void checkbalance(){
        cout<<"Account holder :"<<holder<<endl;
        cout<<"Account no :"<<accountNo<<endl;
        cout<<"current balance "<<balance<<endl;
    }
    
};
int main()
{
    BankAccount A1;
        A1.createAccount();
        
    int choice;
    
    do{
        cout<<"\n---Bank Management Menu---\n";
        cout<<"1.Check balance \n";
        cout<<"2.Deposite money \n";
        cout<<"3.Withdraw money \n";
        cout<<"4.Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;
        
        switch(choice){
            case 1:
            A1.checkbalance();
            break;
            case 2:
            A1.deposite();
            break;
            case 3:
            A1.withdraw();
            break ;
            case 4:
            cout<<"Thank you for using our service.bye"<<endl;
            break;
            default:
            cout<<"\n Invalid choice please try again "<<endl;
        }
    } while(choice!=4);
    return 0;
}
