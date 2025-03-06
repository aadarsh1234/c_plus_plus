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
(4)//convert celsius in kelvin
    #include <iostream>
using namespace std;

int main()
{
    float celsius,kelvin;
    std::cout<<"enter temprature of celsius";
    cin>>celsius;
     kelvin=celsius+273.15;
    std::cout<<"temprature in kelvin :"<<kelvin<<endl;

    return 0;
}
(5) //convert miles to kilometer
    #include <iostream>
using namespace std;

int main()
{
    float melies;
    std::cout<<"enter melies:";
    cin>>melies;
     float km=melies/0.621371;
    std::cout<< melies<<" melies is eual to kilometer = "<<km<<endl;

    return 0;
}
(6)// find leap year
    #include <iostream>
using namespace std;

int main()
{
    int year;
    std::cout<<"enter year:";
    cin>>year;
    if((year % 4==0 && year % 100!=0) || (year %400==0)){
    std::cout<<year<<":is a leap year"<<endl;
    }
    else{
    std::cout<<year<<":is not leap year"<<endl;
    }
    return 0;
}
   
