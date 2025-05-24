
#include <iostream>
using namespace std;
class employee{
    int id;
    string name;
    double salary;
    public:
    void setdata(string n,int Id,double s){
        name=n;
        id=Id;
        salary=s;
        
    }
    void setperformance(int rating){
        if(rating==5){
            salary=salary+ (salary*50/100.0);
            // cout<<"\nsalary is:"<<salary;
        }
        else if (rating==4){
            salary=salary + (salary*40/100.0);
            // cout<<"\nsalary is:"<<salary;
        }
        else if (rating==3){
            salary =salary + (salary*30/100.0);
            // cout<<"\nsalary is:"<<salary;
        }
        else{
            salary=salary + (salary*10/100.0);
            // cout<<"\nsalary is:"<<salary;
        }
    }
    void display(){
        cout<<"Name of employee:"<<name<<endl;
        cout<<"Id of employee:"<<id<<endl;
        cout<<"salary of employee:"<<salary<<endl;
    }
    
};
int main()
{
    
  
    string name;
    int Id;
    double salary;
    int rating;
    cout<<"Enter name:";
    cin>>name;
    cout<<"enter id:";
    cin>>Id;
    cout<<"Enter salary:";
    cin>>salary;
    cout<<"enter rating:";
    cin>>rating;
    employee obj;
    obj.setdata(name,Id,salary);
    obj.setperformance(rating);
    obj.display();

    return 0;
}
