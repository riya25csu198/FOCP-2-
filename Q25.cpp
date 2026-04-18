#include<iostream>
#include<string>
using namespace std;
class Password{
    string pass;
    public:
    void getData(){
        cout<<"Enter password:";
        cin>>pass;
    }
    void validate(){
        int hasUpper=0, hasLower=0, hasDigit=0, hasSpecial=0;
        for(int i=0; i<pass.length(); i++){
            if(pass[i]>='A' && pass[i]<='Z'){
                hasUpper=1;
            }
            else if(pass[i]>='a' && pass[i]<='z'){
                hasLower=1;
            }
            else if(pass[i]>='0' && pass[i]<='9'){
                hasDigit=1;
            }
            else if(pass[i]=='@'|| pass[i]=='#'|| pass[i]=='$'|| pass[i]=='%'|| pass[i]=='!'|| pass[i]=='&'|| pass[i]=='*'){
                hasSpecial=1;
            }
        }
        if(hasUpper && hasLower && hasDigit && hasSpecial){
            cout<<"Valid Password";
        }
        else{
            cout<<"Invalid Password";
        }  
    }
};
int main(){
    Password p1;
    p1.getData();
    p1.validate();
    return 0;
}
