
#include <iostream>
using namespace std;
class Fibo{
    int n,a,b,c;
    public:
    void fibonoocci(){
        cout<<"Enter any number";
        cin>>n;
        a=0;b=1;
        for(int i=1;i<=n;i++){
            cout<<a<<" ";
            c=a+b;
            a=b;
            b=c;
        }
        cout<<endl; // only uses space the output
    }
}
};

int main()
{
Fibo obj;
obj.fibonoocci();
    return 0;
