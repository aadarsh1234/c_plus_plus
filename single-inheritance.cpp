

#include <iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Animal is eating"<<endl;
    }
};
class dog:public Animal{
    public:
    void brak(){
        cout<<"Dog id brank";
    }
};
int main()
{
dog d1;
d1.eat();
d1.brak();
    return 0;
}
