#include<iostream>
using namespace std;
class Triangle{
    int a,b,c;
    public:
    void getData(){
        cout<<"Enter the length of first side:";
        cin>>a;
        cout<<"Enter the length of second side:";
        cin>>b;
        cout<<"Enter the length of third side:";
        cin>>c;
    }
    void displayData(){
        if(a==b && b==c){
            cout<<"Its an Equilateral Triangle";
        }
        else if(a==b||b==c||a==c){
            cout<<"Its an Isoceles Triangle";
        }
        else{
            cout<<"Its an Scalene Triangle";
        }
    }
};
int main(){
    Triangle t1;
    t1.getData();
    t1.displayData();
    return 0;
}
