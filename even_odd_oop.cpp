
#include <iostream>
using namespace std;
class even_odd{
    int a[10];
    int even;
    int odd;
    public:
    even_odd(){
        even=0;
        odd=0;
    }
    void input(){
        cout<<"enter the value of element";
        for (int i=0;i<10;i++){
            cin>>a[i];
        }
    }
    void checker(){
        cout<<"Even number:";
        for(int i=0;i<10;i++){
            if (a[i]%2==0){
                cout<<a[i]<<" ";
                even+=1;
            }
        }
        cout<<"\nodd number:";
        for(int i=0;i<10;i++){
            if(a[i]%2!=0){
                cout<<a[i]<<" ";
                odd+=1;
            }
        }
    }
    void display(){
        cout<<"\nEven is:"<<even<<endl;
        cout<<"Odd is:"<<odd<<endl;
    }
};

int main()
{

even_odd obj;
obj.input();
obj.checker();
obj.display();
    return 0;
}
