
#include <iostream>
using namespace std;
class Rectangle{
    double length ,widht;
    public:
    void input(){
        cout<<"Enter the length:";
        cin>>length;
        cout<<"Enter the widht";
        cin>>widht;
    }
    void area(){
        double area=length*widht;
        cout<<"Rectangle of area :"<<area<<endl;
    }
    void perimeter(){
        double perimeter=2*(length+widht);
        cout<<"Rectangle of perimeter :"<<perimeter<<endl;
    }
};
int main()
{
    Rectangle obj;
    obj.input();
    obj.area();
    obj.perimeter();
    return 0;
}

// constructor through

#include <iostream>
using namespace std;
class Recatangle{
    double length,widht;
    public:
    Recatangle(){
        cout<<"Enter the lenght";
        cin>>length;
        cout<<"Enter the width";
        cin>>widht;
    }
    void calculation(){
        double area=length*widht;
        double perimeter =2*(length+widht);
        cout<<"Area is"<<area<<endl;
        cout<<"Perimeter is"<<perimeter<<endl;
    }
};
int main()
{
    Recatangle s1;
    s1.calculation();
    return 0;
}
