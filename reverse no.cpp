#include <iostream>
using namespace std;

int main()
{
    int num, reverse=0;
    std::cout<<"Enter number";
    cin>>num;
    while(num !=0){
        int digit= num%10;
        reverse= reverse*10+digit;
        num /=10;
    }
    cout<<"revese  number"<<reverse<<endl;

    return 0;
}