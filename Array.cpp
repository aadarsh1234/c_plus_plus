// find maximum  in array
#include <iostream>
using namespace std;
int main()
{
  int a[5];
  for(int i=0;i<5;i++){
      cout<<"Enter element"<<i+1<<":";
      cin>>a[i];
  }
   int max_value=a[0];
   for(int i=0;i<5;i++){
       if(a[i]>max_value){
           max_value=a[i];
       }
   }
   cout<<"Maximum is:"<<max_value;
    return 0;
}


// cout even and odd number
#include <iostream>
using namespace std;


int main()
{
    int even_count=0;
    int odd_count=0;
    int arr[10];
    for (int i=0;i<10;i++){
        cout<<"Enter  element"<<(i+1)<<":";
        cin>>arr[i];
        if(arr[i]%2==0){
            even_count+=1;
        }
        else{
            odd_count+=1;
        }
    }
    cout <<"Even is:"<<even_count<<endl;
    cout <<"Odd is:"<<odd_count<<endl; 
    return 0;
}

// calculate sum and percenatge
#include <iostream>
using namespace std;

int main()
{
    int a[5];
    int sum=0;
    cout<<"Enter 5 number"<<endl;
    for(int i=0;i<5;i++){
        cout<<"number:"<<(i+1)<<"";
        cin>>a[i];
        sum+=a[i];
    }
        cout<<"sum is:"<<sum<<endl;
        float percentage = (sum / 500.0) * 100;
        cout<<"percentage is:"<<percentage<<"%"<<endl;
        
    return 0;
}
