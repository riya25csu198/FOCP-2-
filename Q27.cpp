#include<iostream>
using namespace std;
class Item{
    float price[10],max;
    public:
    void getData(){
        cout<<"Enter price of 10 items:\n";
        for(int i=0; i<10; i++){
            cin>>price[i];
        }
    }
    void findMax(){
        max=price[0];
        for(int i=1; i<10; i++){
            if(price[i]>max){
                max=price[i];
            }
        }
    }
    void display(){
        cout<<"Maximum price is:"<<max;
    }
};
int main(){
    Item i1;
    i1.getData();
    i1.findMax();
    i1.display();
    return 0;
}
