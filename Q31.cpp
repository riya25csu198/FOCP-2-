#include<iostream>
using namespace std;
class QC{
    int arr[5],count=0;
    public:
    void getData(){
        cout << "Enter 5 numbers:\n";
        for(int i = 0; i < 5; i++){
            cin >> arr[i];
        }
    }
    void check(){
        for(int i = 0; i < 5; i++) {
            if(arr[i] % 3 == 0 && arr[i] % 5 == 0){
                count++;
            }
        }
    }
    void display(){
        cout << "Count of numbers divisible by 3 and 5 is:"<<count;
    }
};
int main(){
    QC q1;
    q1.getData();
    q1.check();
    q1.display();
    return 0;
}
    
