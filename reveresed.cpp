#include <iostream>
using namespace std;

int main()
{
    int num,reversed=0;
    std::cout<<"Enter a number";
    cin>>num;
    while(num!=0){
        int digit=num % 10;
        reversed =reversed*10+digit;
        num/=10;
    }
    cout<<"Rerversed number :"<<reversed<<endl;
    return 0;
}
