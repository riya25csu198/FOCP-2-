#include<iostream>
using namespace std;
class Temperature{
    float temp[30],min;
    public:
    void getData(){
        cout<<"Enter temperatures for 30 days:\n";
        for(int i=0; i<30; i++){
            cin>>temp[i];
        }
    }
    void findMin(){
        min=temp[0];
        for(int i=1; i<30; i++){
            if(temp[i]<min){
                min=temp[i];
            }
        }
    }
    void display(){
        cout<<"Minimum temperature is:"<<min;
    }
};
int main(){
    Temperature t1;
    t1.getData();
    t1.findMin();
    t1.display();
    return 0;
}
