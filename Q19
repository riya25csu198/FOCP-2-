#include<iostream>
using namespace std;
class PrimeRange{
    int start,end;
    public:
    void getData(){
        cout<<"Enter the start of the range:";
        cin>>start;
        cout<<"Enter the end of the range:";
        cin>>end;
    }
    void findPrimes(){
        for(int i=start; i<=end; i++){
            if(i<=1){
                continue;
            }
            int m=1;
            for(int j=2; j<=i/2; j++){
                if(i%j==0){
                    m=0;
                    break;
                }
            }
            if(m){
                cout<<i<<" ";
            }
        }
        
    }
};
int main(){
    PrimeRange p;
    p.getData();
    cout<<"Prime numbers are:";
    p.findPrimes();
    return 0;
}
