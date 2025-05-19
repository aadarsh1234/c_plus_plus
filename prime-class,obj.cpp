
#include <iostream>
using namespace std;
class Prime{
    int n;
    public:
    void Input(){
        cout<<"Enter any number:";
        cin>>n;
    }
    void Output(){
        int count=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                count++;
            }
        }
        if(count==2)
        cout<<"Prime number";
        else
        cout<<"Not prime number";
    }
};

int main()
{
    Prime obj;
    obj.Input();
    obj.Output();
    return 0;
}
