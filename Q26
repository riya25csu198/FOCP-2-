#include<iostream>
using namespace std;
class ReportCard{
    int marks[5],total;
    float percentage;
    public:
    void getData(){
        cout<<"Enter marks of 5 subjects:\n";
        for(int i=0; i<5; i++){
            cin>>marks[i];
        }
    }
    void calculate(){
        total=0;
        for(int i=0; i<5; i++){
            total+=marks[i];
        }
        percentage=total/5.0;
    }
    void display(){
        cout<<"Total marks is:"<<total<<endl;
        cout<<"Total percentage is:"<<percentage<<"%"<<endl;
    }
};
int main(){
    ReportCard rc1;
    rc1.getData();
    rc1.calculate();
    rc1.display();
    return 0;
}
