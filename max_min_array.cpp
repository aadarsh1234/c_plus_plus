
#include <iostream>
using namespace std;
class finder{
    int a[10];
    int max_value;
    int min_value;
    int n;
    public:
    void input(){
        cout<<"Enter the size of:";
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<"enter the value"<<i+1<<":";
            cin>>a[i];
        }
    }
    void max_min(){
        max_value=a[0];
        min_value=a[0];
        for(int i=0;i<n;i++){
            if (a[i]>max_value){
                max_value=a[i];
            }
            if (a[i]<min_value){
                min_value=a[i];
            }
        }
        cout<<"Maximun is:"<<max_value<<endl;
        cout<<"Minimum is:"<<min_value<<endl;
    }
};
int main()
{
finder obj;
obj.input();
obj.max_min();
    return 0;
}
