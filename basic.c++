(1)//area of circle
#include <iostream>
using namespace std;

int main()
{
    float radius,area;
     float  pi =3.1415;
    std::cout<<"enter radius";
    cin>>radius;
    area=pi*radius* radius;
    std::cout<<"area is"<<area;

    return 0;
}
(2) //swap two value
    #include <iostream>
using namespace std;

int main()
{
    float a,b;
    std::cout<<"enter a";
    cin>>a;
     std::cout<<"enter b";
     cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    std::cout<<"after swap is a="<<a<<",b="<<b<<endl;

    return 0;
}
(3)// calculate simple interst 
    #include <iostream>
using namespace std;

int main()
{
    float principle,rate,time;
    std::cout<<"enter principle";
    cin>>principle;
     std::cout<<"enter rate";
     cin>>rate;
     std::cout<<"enter time";
     cin>>time;
    float simple_intrest=(principle*rate*time)/100;
    std::cout<<"simple interst is "<<simple_intrest<<endl;

    return 0;
}
