#include<iostream>
#include<string>
using namespace std;
class Type{
    char ch;
    public:
    void getData(){
        cout<<"Enter the character(alphabets or digits(0-9)):";
        cin>>ch;
    }
    void displayData(){
        if(ch>='0' && ch<='9'){
            cout<<"Number";
        }
        else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
                cout<<"Vowel";
            }
            else{
                cout<<"Consonants";
            }
        }
        else{
            cout<<"Invalid input";
        }
    }
};
int main(){
    Type c1;
    c1.getData();
    c1.displayData();
    return 0;
}
