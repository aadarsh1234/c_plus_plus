//Program to Calculate the Sum of Digits of a Number 

 #include <iostream>

using namespace std;

int main (){
int num,sum=0;
cout<<"enter number";
cin>>num;
while(num!=0){
sum +=num%10;
num /=10;
 }
cout<<"sum of digit"<<sum<<endl;
}