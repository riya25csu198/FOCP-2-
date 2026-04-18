#include<iostream>
using namespace std;
class Pascal{
    int n;
    public:
    void getData(){
        cout<<"Enter number of rows:";
        cin>>n;
    }
    void display(){
        for(int i = 0; i < n; i++){
            int val=1;
            for(int j = 0; j <= i; j++){
                cout<<val<<" ";
                val=val*(i-j)/(j+1);  
            }
            cout<<endl;
        }
    }
};

int main(){
    Pascal p1;
    p1.getData();
    p1.display();
    return 0;
}
