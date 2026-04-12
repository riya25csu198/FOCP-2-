#include<iostream>
using namespace std;
class Calendar{
    int year;
    public:
    void getData(){
        cout<<"Enter the year:";
        cin>>year;
    }
    void displayResult(){
        if((year%4==0 && year%100!=0) || (year%400==0)){
            cout<<"Yes the year is leap year";
        }
        else{
            cout<<"No the year is not leap year";
        }
    }
};
int main(){
    Calendar a;
    a.getData();
    a.displayResult();
    return 0;
}
