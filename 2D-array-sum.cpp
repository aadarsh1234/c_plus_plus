#include <iostream>
using namespace std;
int main()
{
int arr1[3][3];
int arr2[3][3];

cout<<"Enter first array element\n";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    cout<<"arr1["<<i<<"]["<<j<<"]:";
    cin>>arr1[i][j];
        }
    }
    
    cout<<"\nEnter second  array element\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"arr2["<<i<<"]["<<j<<"]:";
            cin>>arr2[i][j];
        }
    }
    cout<<"\nfirst array\n";
 for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<arr1[i][j]<<" ";
        }
                cout<<endl;
    }  
    cout<<"\nsecond array"<<endl;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<arr2[i][j]<<" ";
        }
                cout<<endl;
    } 
    cout<<"\naddition is"<<endl;
     for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<arr1[i][j]+arr2[i][j]<<" ";
        }
                cout<<endl;
    } 
    return 0;
}
