#include <iostream>
#include <sstream>
using namespace std;

class Student{
    private:
    int age,standard;
    string  first_name,last_name;
    public:
    void set_age(int a){
         age =a;
    }
    int get_age(){
        return age;
    }
    void set_standard(int s){
        standard =s;
    }
    int get_standard(){
        return standard;
    }
    void set_first_name(string f){
       first_name =f;
    }
    string get_first_name(){
        return first_name;
    }
    void set_last_name(string l){
           last_name=l;
    }
    string get_last_name(){
        return last_name;
    }
    string to_string(){
        return std::to_string(age)+","+first_name +","+last_name+","+ std::to_string(standard);
    }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cout<<"Enter the age:";
    cin >> age;
    cout<<"Enter first_name:";
    cin>>first_name;
    cout<<"Enter last_name:";
    cin>>last_name;
    cout<<"Enter standard:";
    cin>>standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
