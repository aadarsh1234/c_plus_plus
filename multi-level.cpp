
#include <iostream>
using namespace std;
class base{
    protected:
    int a;
    public:
    void input(){
    cout<<"Enter value of a:";
    cin>>a;
    }
    // void show(){
    //     cout<<"a="<<a<<endl;
    // }
};

class derive1:public base{
    protected:
    int b;
    public:
    void input1(){
        cout<<"enter the value of b";
        cin>>b;
    }
    // void show1(){
    //     cout<<"a="<<a<<" b="<<b<<endl;
    // }
};
class derive2:public derive1{
    private:
    int c;
    public:
    void input2(){
        cout<<"enter the value of c";
        cin>>c;
    }
    void show2(){
        cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
    }
};
int main()
{
derive2 obj;
obj.input();
// obj.show();

obj.input1();
// obj.show1();

obj.input2();
obj.show2();

return 0;
}
