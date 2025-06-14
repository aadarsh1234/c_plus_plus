#include <iostream>
using namespace std;
class employee{
    int account_no;
    char name[20];
    char distination[20];
    public:
    void getemployee_detail(){
    cout<<"Enter account no:";
    cin>>account_no;
    cin.ignore();
    
    cout<<"Enter Name of employee:";
    cin.getline(name, 20);
    cout<<"Enter your distination:";
    cin.getline(distination, 20);
}
    void display_employee_detail(){
        cout << "\n--- Employee Details ---" << endl;
        cout<<"Accout no is:"<<account_no<<endl;
        cout<<"Name is :"<<name<<endl;
        cout<<"Distination is:"<<distination<<endl;
}
};
class salary{
    protected:
    int BP,HRA,PF;
    double Total_salary;
    public:
    void get_pay_detail(){
        cout<<"\nEnter Basic salary:";
        cin>>BP;
        cout<<"Enter HRA salary:";
        cin>>HRA;
        cout<<"Enter PF salary";
        cin>>PF;
    }
    void calculator(){
        Total_salary=BP+HRA+PF;
    }
        
    void display_salary(){
        cout << "\n--- Salary Details ---" << endl;
        cout << "Basic Pay: " << BP << endl;
        cout << "HRA: " << HRA << endl;
        cout << "PF: " << PF << endl;
        cout<<"Total salary is:"<<Total_salary<<endl;
    }
};
class bankcredit:public salary,public employee{
    string bank_name;
    string IFSC;
    int account_no1;
    public:
    void get_bankcredit(){
        cout<<"\nEnter bank Accout:";
        cin>>account_no1;
        cout<<"Enter IFSC code:";
        cin>>IFSC;
        cout<<"Enter Bank Name:";
        cin>>bank_name;
    }
    void display_bank(){
        cout << "\n--- Bank Credit Details ---" << endl;
        cout<<"Bank name is:"<<bank_name<<endl;
        cout<<"IFSC code is:"<<IFSC<<endl;
        cout<<"Bank Accout no is:"<<account_no1<<endl;
        
    }
    void pay_salary(){
        cout<<"\nTotal Salary of Rs."<<Total_salary<<" \nhas been credit to your account."<<endl;
    }
    void take_input(){
        getemployee_detail();
        get_pay_detail();
        calculator();
        get_bankcredit();
  
}
    void display_all(){
    display_employee_detail();
    display_salary();
    display_bank();
    pay_salary();
    
    }
    
};
int main()
{
  bankcredit obj;
  obj.take_input();
  obj.display_all();
  
    return 0;
}
