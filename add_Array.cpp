#include <iostream>
using namespace std;

class Sum {
    private:
        int a[5];
        int b[5];
        int c[5];
    public:
    void input(){
    for (int i=0;i<5;i++){
        cout<<"Enter element first array";
        cin>>a[i];
    }
    for (int i=0;i<5;i++){
        cout<<"Enter element second array";
        cin>>b[i];
    }
    }
    void calculate() {
        for (int i=0; i<5;i++) {
               c[i]=a[i] + b[i];
            }
    }
        void display() {
            for(int i=0;i<5;i++){
                cout<<a[i];
            }
            for (int i=0;i<5;i++){
                cout<<b[i]<<endl;
            }
            for (int i=0; i < 5; i++) {
                cout << c[i];
            }
            cout << endl;
            for (int i = 0; i < 5; i++) {
                cout << c[i] << " ";     
            }
        }
        
};
int main() {
    Sum obj;       
    obj.input();
    obj.calculate();    
    obj.display();      
    return 0;
}
