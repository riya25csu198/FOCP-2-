#include<iostream>
using namespace std;
class Calculator{
    int a,b,method;
    public:
    void getData(){
        cout<<"Enter first number:";
        cin>>a;
        cout<<"Enter the seconf number:";
        cin>>b;
        cout<<"Enter the method:";
        cin>>method;
    }
    void displayData(){
        if(method==1){
            cout<<a+b;
        }
        else if(method==2){
            cout<<a-b;
        }
        else if(method==3){
            cout<<a*b;
        }
        else if(method==4){
            cout<<a/b;
        }
        else if(method==5){
            cout<<a%b;
        }
        else{
            cout<<"INVALID INPUT";
        }
    }
};
int main(){
    Calculator c1;
    c1.getData();
    c1.displayData();
    return 0;
}
