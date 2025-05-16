
#include <iostream>
using namespace std;
class employe{
    private:
    string name;
    int Id;
    int salary;
    public:
        void setemployeDetail(){
            cout<<"Enter the name:";
            cin>>name;
            
            cout<<"Enter the Id:";
            cin>>Id;
            
            cout<<"Enter the salary:";
            cin>>salary;
        }
        
        void displaydetail(){
            cout<<"Name: "<<name<<", Id: "<<Id<<", salary :"<<salary<<endl;
        }
    
};

int main()
{
    employe e1,e2;
    cout<<"Enter details of Employe 1:"<<endl;
    e1.setemployeDetail();
    
    cout<<"\nEnter details of Employe 2:"<<endl;
    e2.setemployeDetail();
    
    cout<<"\nEmploye Detail:";
    e1.displaydetail();
    e2.displaydetail();
    return 0;
}
