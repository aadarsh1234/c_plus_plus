
#include <iostream>
using namespace std;
class Car{
    string name;
    string model;
    int engineNo;
    int seeting;
    public:
    
    Car(string n,string m,int e,int s){
        name=n;
        model=m;
        engineNo=e;
        seeting=s;
    }
    void show(){
        cout<<"name of car:"<<name<<endl;
        cout<<"model of car:"<<model<<endl;
        cout<<"Engine of car"<<engineNo<<endl;
        cout<<"seeting of car"<<seeting<<endl;
    }
};

int main()
{
    Car obj("Toyota","s11",243,8);
    obj.show();
    return 0;
}
