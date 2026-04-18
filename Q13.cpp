#include<iostream>
#include<cmath>
using namespace std;
class Quadratic{
    float a,b,c;
    public:
    void getData(){
        cout<<"Enter the coefficient a:";
        cin>>a;
        cout<<"Enter the coefficient b:";
        cin>>b;
        cout<<"Enter the coefficient c:";
        cin>>c;
    }
    void displayData(){
        if(a==0){
            cout<<"Not a quadratic equation";
        }
        float D=b*b-4*a*c;
        float r1=(-b+sqrt(D))/(2*a);
        float r2=(-b-sqrt(D))/(2*a);
        cout<<"Root 1 is:"<<r1<<endl;
        cout<<"Root 2 is:"<<r2<<endl;
    }
};
int main(){
    Quadratic q1;
    q1.getData();
    q1.displayData();
    return 0;
}
