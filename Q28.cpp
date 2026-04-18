#include<iostream>
using namespace std;
class Number{
    int arr[5],evenSum=0,oddSum=0;
    public:
    void getData(){
        cout<<"Enter 5 numbers:\n";
        for(int i=0; i<5; i++){
            cin>>arr[i];
        }
    }
    void calculate(){
        for(int i=0; i<5; i++){
            if(arr[i]%2==0){
                evenSum+=arr[i];
            }
            else{
                oddSum+=arr[i];
            }
        }
    }
    void display(){
        cout<<"Sum of even numbers is:"<<evenSum<<endl;
        cout<<"Sum of odd numbers is:"<<oddSum<<endl;
    }
};
int main(){
    Number n1;
    n1.getData();
    n1.calculate();
    n1.display();
    return 0;
}
