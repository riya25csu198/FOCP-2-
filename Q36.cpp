#include<iostream>
using namespace std;
class Matrix{
    int a[10][10],b[10][10],c[10][10];
    int m,n,p,q;
    public:
    void getData(){
        cout<<"Enter the row of first matrice:";
        cin>>m;
        cout<<"Enter the column of the first matrice:";
        cin>>n;
        cout<<"Enter the row of the second matrice:";
        cin>>p;
        cout<<"Enter the column of the second matrice:";
        cin>>q;
    }
    void displayData(){
        if(n != p){
            cout<<"Not possible";
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }
        for(int i=0; i<p; i++){
            for(int j=0; j<q; j++){
                cin>>b[i][j];
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                c[i][j]=0;
                for(int k=0; k<n; k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Matrix x1;
    x1.getData();
    return 0;
}
