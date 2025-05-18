
#include <iostream>
using namespace std;
class Tabel {
    private:
    int n,r;
    public:
    void calculatetabel(){
        cout<<"enter any number:";
        cin>>n;
        for(int i=1;i<=10;i++){
            r=n*i;
        
        cout<<n<<"x"<<i<<"="<<r<<endl;
        }
    }
};
int main(){
    Tabel T;
    T.calculatetabel();
}
