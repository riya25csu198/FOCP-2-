#include<iostream>
using namespace std;
class Matrix{
    int a[3][3];
    public:
    void getData(){
        cout<<"Enter matrix:\n";
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>a[i][j];
            }
        }
    }
    void displayTranspose(){
        cout<<"Transpose:\n";
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout<<a[j][i]<<" ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m1;
    m1.getData();
    m1.displayTranspose();
    return 0;
}
