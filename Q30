#include<iostream>
using namespace std;
class Payroll{
    float salary[10],total=0,avg;
    public:
    void getData(){
        cout<<"Enter salaries of 10 employees:\n";
        for(int i=0; i<10; i++){
            cin>>salary[i];
        }
    }
    void calculate(){
        for(int i=0; i<10; i++){
            total+=salary[i];
        }
        avg=total/10;
    }
    void display(){
        cout<<"Total salary is:"<<total<<endl;
        cout<<"Average salary is:"<<avg<<endl;
    }
};
int main(){
    Payroll p1;
    p1.getData();
    p1.calculate();
    p1.display();
    return 0;
}
