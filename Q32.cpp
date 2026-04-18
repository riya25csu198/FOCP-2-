#include<iostream>
using namespace std;
class Numbers{
    int arr[5], largest, second;
    public:
    void getData(){
        cout<<"Enter 5 numbers:\n";
        for(int i = 0; i < 5; i++){
            cin>>arr[i];
        }
    }
    void findLargest(){
        largest=second=arr[0];
        for(int i = 1; i < 5; i++){
            if(arr[i]>largest){
                second=largest;
                largest=arr[i];
            }
            else if(arr[i]>second && arr[i]!=largest){
                second=arr[i];
            }
        }
    }
    void display(){
        cout<<"Largest is:"<<largest<<endl;
        cout<<"Second Largest is:"<<second;
    }
};

int main() {
    Numbers n;
    n.getData();
    n.findLargest();
    n.display();
    return 0;
}
