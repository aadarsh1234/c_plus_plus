
#include <iostream>
using namespace std;
class student{
    private:
    string name;
    int Id;
    int mathmarks;
    int chemmarks;
    int pyhcismarks;
    int englishmarks;
    public:
        void setstudentDetail(){
            cout<<"Enter the name:";
            cin>>name;
            
            cout<<"Enter the Id:";
            cin>>Id;
            
            cout<<"Enter the math marks:";
            cin>>mathmarks;
            cout<<"Enter the chem marks:";
            cin>>chemmarks;
            cout<<"Enter the pyhcis marks:";
            cin>>pyhcismarks;
            cout<<"Enter the english marks:";
            cin>>englishmarks;
        }
        
        void displaydetail(){
            float total_marks=mathmarks+chemmarks+pyhcismarks+englishmarks;
            float percentage=(total_marks/400)*100;
            cout<<"Name: "<<name<<", Id: "<<Id<<", percentage :"<<percentage<<endl;
        }
    
};

int main()
{
    student e1,e2;
    cout<<"Enter details of student 1:"<<endl;
    e1.setstudentDetail();
    
    cout<<"\nEnter details of student 2:"<<endl;
    e2.setstudentDetail();
    
    cout<<"\nstudent Detail:";
    e1.displaydetail();
    e2.displaydetail();
    return 0;
}
