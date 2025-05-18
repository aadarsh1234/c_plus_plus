
#include <iostream>
using namespace std;
class ASCLL {
    private:
    char ch;
    public:
    void Input(){
        cout<<"Enter any character:";
        cin>>ch;
    }
    void Output(){
        cout<<"ASCLL value of "<<ch<<"is : "<<(int)ch<<endl;
    }
};
int main(){
   ASCLL obj;
   obj.Input();
   obj.Output();
}
