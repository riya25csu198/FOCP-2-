#include<iostream>
using namespace std;
class Matrix {
    int a[3][3],b[3][3];
    public:
    void getData(){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>a[i][j];
            }
        }
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>b[i][j];
            }
        }    
    }
    void display(){
        cout<<"Sum:\n";
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout<<a[i][j]+b[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Matrix m1;
    m1.getData();
    m1.display();
    return 0;
}
