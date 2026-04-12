#include<iostream>
#include<cmath>
using namespace std;
class NumberCheck{
    int n;
    public:
    void getData(){
        cout<<"Enter the number:";
        cin>>n;
    }
    void checkPerfect(){
        int sum=0;
        for(int i=1; i<=n/2; i++){
            if(n%i==0){
                sum+=i;
            }
        }
        if(sum==n){
            cout<<"Its a perfect number"<<endl;
        }
        else{
            cout<<"Its not a perfect number"<<endl;
        }
    }
    void checkArmstrong(){
        int temp=n,sum=0,digits=0;
        while(temp!=0){
            digits++;
            temp/=10;
        }
        temp=n;

        while(temp!=0){
            int rem=temp%10;
            sum+=pow(rem,digits);
            temp/=10;
        }
        if(sum==n){
            cout<<"Its an Armstrong number"<<endl;
        }
        else{
            cout<<"Its not an armstrong number"<<endl;
        }
    }
};
int main(){
    NumberCheck n1;
    n1.getData();
    n1.checkPerfect();
    n1.checkArmstrong();
    return 0;
}
