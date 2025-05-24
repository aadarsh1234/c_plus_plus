
#include <iostream>
using namespace std;
class triangle{
    double side1,side2,side3;
    public:
    void input(){
        cout<<"Enter the leghth or three side"<<endl;
        cout<<"Side 1:";
        cin>>side1;
        cout<<"Side 2:";
        cin>>side2;
        cout<<"Side 3:";
        cin>>side3;
    }
    void determine(){
        if (side1==side2 && side2==side3){
            cout<<"equleteral triangle";
        }
        else if (side1==side2|| side2==side3||side1==side3){
            cout<<"Isoleses triangle";
        }
        else{
            cout<<"scalene triangle";
        }
    }
    
};

int main()
{
    triangle obj;
    obj.input();
    obj.determine();
    return 0;
}
