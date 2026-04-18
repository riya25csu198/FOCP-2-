#include<iostream>
#include<string.h>
using namespace std;
class Palidrome{
    string str;
    public:
    void getData(){
        cout<<"Enter the ID:";
        cin>>str;
    }
    void check(){
        int m=1;
        for(int i=0; i<str.length()/2; i++){
            if(str[i]!=str[str.length()-1-i]){
                m=0;
                break;
            }
        }
        if(m){
            cout<<"Palindrome ID";
        }
        else{
            cout<<"Not a Palindrome ID";
        }
    }
};
int main(){
    Palidrome p1;
    p1.getData();
    p1.check();
    return 0;
}
