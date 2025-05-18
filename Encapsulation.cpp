
#include <iostream>
using namespace std;
class encap{
    private:
    int age;
    
    void show(){
        cout<<"Ankush"<<endl;
    }
    public: 
    
    string name;
    void stevalue(int a){
        show();
        age=a;
        cout<<age<<endl;
    }
};

int main(){
    encap E;
    E.name="Aadarsh";
    E.stevalue(23);
    cout<<E.name;
}
