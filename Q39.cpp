#include<iostream>
#include<string>
using namespace std;
class TextProcessor{
    string str;
    public:
    void getData(){
        cout<<"Enter text:";
        getline(cin, str);
    }
    void process(){
        string result =" ";
        int space=0;
        for(int i=0; i<str.length(); i++){
            if(str[i]>='A' && str[i]<='Z'){
                str[i]=str[i]+32;
            }
            if((str[i]>='a' && str[i]<='z') || (str[i]>='0' && str[i]<='9')){
                result += str[i];
                space=0;
            }
            else if(str[i]==' ' && space==0){
                result+=' ';
                space=1;   
            }
        }

        cout <<"Normalized Text:"<<result;
    }
};

int main(){
    TextProcessor t1;
    t1.getData();
    t1.process();
    return 0;
}
