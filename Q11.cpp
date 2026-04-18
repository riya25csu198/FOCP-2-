#include<iostream>
using namespace std;
class Expenses{
    int noofitems;
    int price;
    int totalamount;
    public:
    void getData(){
        cout<<"Enter the number of items:";
        cin>>noofitems;
        cout<<"Enter the price per item:";
        cin>>price;
    }
    void displayResult(){
        if(noofitems>1000){
            totalamount=noofitems*price*0.10;
            cout<<"The total amount after discount is:"<<totalamount;
        }
        else{
            totalamount=noofitems*price;
            cout<<"The total amount is:"<<totalamount;
        }
    }
};
int main(){
    Expenses a;
    a.getData();
    a.displayResult();
    return 0;
}
