#include<iostream>
#include<string>
using namespace std;
class Username {
    string str;

public:
    void getData(){
        cout<<"Enter username:";
        cin>>str;
    }
    void validate(){
        for(int i = 0; i < str.length(); i++){
            if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9') )){
                cout<<"Invalid Username";
            }
        }
        cout<<"Valid Username";
    }
};

int main() {
    Username u1;
    u1.getData();
    u1.validate();
    return 0;
}
