#include<iostream>
using namespace std;
int main(){
    int numofemp;
    int basicsalary;
    int netsalary;
    int bonus;
    cout<<"Enter number of employees:";
    cin>>numofemp;
    cout<<"Enter basic salary of employee:";
    cin>>basicsalary;
    bonus=0.12*basicsalary;
    netsalary=bonus+basicsalary;
    cout<<"the bonus of employee is: "<<bonus<<endl;
    cout<<"the net salary of employee is: "<<netsalary;
    return 0;
    
}
