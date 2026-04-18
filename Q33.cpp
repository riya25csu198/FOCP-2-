#include<iostream>
using namespace std;
class Student{
    int marks[3][5];
    public:
    void getData(){
        cout<<"Enter marks for 3 students:\n";
        for(int i = 0; i < 3; i++){
            cout<<"Student"<<i+1<<":\n";
            for(int j = 0; j < 5; j++){
                cin>>marks[i][j];
            }
        }
    }
    void display(){
        cout<<"Marks of 2nd subject of 1st student is:"<< marks[0][1]<<endl;
        cout<<"Marks of 5th subject of 3rd student is:"<< marks[2][4]<<endl;
    }
};

int main(){
    Student s1;
    s1.getData();
    s1.display();
    return 0;
}
