#include <iostream>
using namespace std;
class bankEmployee{
    int age,salary;
    string account;
    string name;
    public:
    bankEmployee(){
        salary=12000;
    }
    void input(){
        cout<<"Enter the name of employee:";
        cin>>name;
        cout<<"Enter the age of employee:";
        cin>>age;
        cout<<"Enter the Account of employee:";
        cin>>account;
    }     =
    void display(){
        cout<<"age of employee:"<<age<<endl;
        cout<<"name of employee:"<<name<<endl;
        cout<<"Accout of employee:"<<account<<endl;
        cout<<"salary of employee:"<<salary<<endl;
    }
};

int main()
{
    bankEmployee obj;
    obj.input();
    obj.display();
    return 0;
}
