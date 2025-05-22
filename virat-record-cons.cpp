
#include <iostream>
using namespace std;
class Virat{
    public:
    int odi_match,odi_run,odi_century;
    int test_match,test_run,test_century;
    int T20_match,T20_run,T20_century;
    Virat(  int o_m,int o_r,int o_c,
            int t_m,int t_r,int t_c,
            int t2_m,int t2_r,int t2_c){
            odi_match=o_m;
            odi_run=o_r;
            odi_century=o_c;
            
            test_match=t_m;
            test_run=t_r;
            test_century=t_c;
            
            T20_match=t2_m;
            T20_run=t2_r;
            T20_century=t2_c;
    }
    void display(){
        float odi_avg=(float)odi_run/odi_match;
        float test_avg=(float)test_run/test_match;
        float t2_avg=(float) T20_run/T20_match;
        
            cout << "\nODI RECORD:\n";
            cout << "Matched : " << odi_match << "\n";
            cout << "Runs : " << odi_run << "\n";
            cout << "Century : " << odi_century << "\n";
            cout << "Average  : " << odi_avg << "\n";
            
            cout << "\nTEST RECORD:\n";
            cout << "Matched : " << test_match << "\n";
            cout << "Runs : " << test_run << "\n";
            cout << "Century : " << test_century << "\n";
            cout << "Average  : " << test_avg << "\n";

            cout << "\nT20 RECORD:\n";
            cout << "Matched : " << T20_match << "\n";
            cout << "Runs : " << T20_run << "\n";
            cout << "Century : " << T20_century << "\n";
            cout << "Average  : " << t2_avg<< "\n";
            
        

    }
};

int main()
{
        int o_m,o_r,o_c;
        int t_m,t_r,t_c;
        int t2_m,t2_r,t2_c;
        
        cout<<"Enter ODI record:";
        cin>>o_m>>o_r>>o_c;
        cout<<"Enter Test record:";
        cin>>t_m>>t_r>>t_c;
        cout<<"Enter T20 record:";
        cin>>t2_m>>t2_r>>t2_c;   
        Virat obj(o_m,o_r,o_c,t_m,t_r,t_c,t2_m,t2_r,t2_c);
        obj.display();
return 0;
}
