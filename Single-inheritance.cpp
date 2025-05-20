
#include <iostream>
using namespace std;
class base{
    protected:
    int a,b;
    public:
    void input(){
        cout<<"Enter value of a nd b:";
        cin>>a>>b;
    }
};
class derive:public base{
    private:
    int m,n;
    public:
    void getdata(){
    cout<<"Enter value of n nd m:";
    cin>>m>>n;
    }
    void display(){
        cout<<"m="<<m<<" "<<"n="<<n<<endl;
        cout<<"a="<<a<<" "<<"b="<<b<<endl;
    }
};
int main()
{
derive obj;

obj.input();
obj.getdata();
obj.display();
    return 0;
}
