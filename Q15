#include<iostream>
using namespace std;
class MaxFinder{
    int n;
    int arr[100];
    public:
    void getData(){
        cout<<"Enter number of elements:";
        cin>>n;
        cout<<"Enter"<<n<<"numbers:\n";
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
    }
    void findMax(){
        int max=arr[0];
        for(int i=1; i<n; i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        cout<<"Largest number is:"<<max;
    }
};
int main(){
    MaxFinder mf1;
    mf1.getData();
    mf1.findMax();
    return 0;
}
