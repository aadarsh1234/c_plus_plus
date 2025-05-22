
#include <iostream>
using namespace std;
class virat_Record{
    public:
        int odi_match,odi_run,odi_century;
        int Test_match,Test_run,test_century;  
        int T20_match,T20_run,T20_century;

     void OdiRecord(){
        cout<<"Enter odi_match:";
        cin>>odi_match;
        cout<<"Enter odi_run:";
        cin>>odi_run;
        cout<<"Enter century:";
        cin>>odi_century;
        cout<<"\n";
    }
    
    inline void TestRecord(){
        cout<<"Enter Test_match:";
        cin>>Test_match;
        cout<<"Enter Test_run:";
        cin>>Test_run;
        cout<<"Enter century:";
        cin>>test_century;
        cout<<"\n";


}
    inline void T20Record(){
        cout<<"Enter T20_match:";
        cin>>T20_match;
        cout<<"Enter T20_run:";
        cin>>T20_run;
        cout<<"Enter century:";
        cin>>T20_century;
        cout<<"\n";

}

    inline void display(){
        float Odi_avg=(float)odi_run/odi_match;
        float test_avg=(float)Test_run/Test_match;
        float T20_avg=(float)T20_run/T20_match;

        cout << "\nODI RECORD:\n";
        cout<<"Matched :"<<odi_match<<"\n";
        cout<<"Runs :"<<odi_run<<"\n";
        cout<<"Century :"<<odi_century<<"\n";
        cout<<"Average  :"<<Odi_avg<<"\n";
        
        cout<<"\n TEST RECORD:\n";
        cout<<"Matched :"<<Test_match<<"\n";
        cout<<"Runs :"<<Test_run<<"\n";
        cout<<"Century :"<<test_century<<"\n";
        cout<<"Average  :"<<test_avg<<"\n";
        
         cout<<"\n T20 RECORD:\n";
        cout<<"Matched :"<<T20_match<<"\n";
        cout<<"Runs :"<<T20_run<<"\n";
        cout<<"Century :"<<T20_century<<"\n";
        cout<<"Average  :"<<T20_avg<<"\n";
    }
};

int main()
{
    virat_Record obj;
    obj.OdiRecord();
    obj.TestRecord();
    obj.T20Record();
    obj.display();
    

    return 0;
}
