#include<iostream>
using namespace std;
class PrimeCheck{
    int num;
    public:
    void getData(){
        cout<<"Enter the number:";
        cin>>num;
    }
    void checkPrime(){
        if(num<=1){
            cout<<"Not a prime number";
        }
        for(int i=2; i<=num/2; i++){
            if(num%i==0){
                cout<<"Not a prime number";
            }
        }
        cout<<"Prime Number";
    }
};
int main(){
    PrimeCheck p;
    p.getData();
    p.checkPrime();
    return 0;
}
