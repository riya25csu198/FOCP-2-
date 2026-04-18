#include<iostream>
#include<string>
using namespace std;
class StringProcessor{
    string str,result;
    public:
    void getData(){
        cout<<"Enter string:";
        getline(cin,str);
    }
    void process(){
        int space = 0;
        for(int i = 0; i < str.length(); i++){
            char ch=str[i];
            if(ch >= 'A' && ch <= 'Z'){
                ch = ch + 32;
            }
            if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
                result += ch;
                space = 0;
            }
            else if(ch == ' ' && space == 0 && result.length() != 0){
                result += ' ';
                space = 1;
            }
        }
        if(result.length() > 0 && result[0] >= 'a' && result[0] <= 'z'){
            result[0] = result[0] - 32;
        }
    }
    void analyze(){
        int words=0,digits=0,special=0;
        for(int i = 0; i < result.length(); i++){
            if(result[i]==' '){
                words++;
            }
            else if(result[i] >= '0' && result[i] <= '9'){
                digits++;
            }
        }
        if(result.length() > 0){
            words++;
        }
        for(int i = 0; i < str.length(); i++){
            if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9') || (str[i] == ' '))){
                special++;
            }
        }
        cout<<"Processed String is:"<<result<<endl;
        cout<<"Total Words is:"<<words<<endl;
        cout<<"Total Digits is:"<<digits<<endl;
        cout<<"Total Special Characters is:"<<special<<endl;

        
        bool valid = true;
        for(int i = 0; i < result.length(); i++) {
            if(!((result[i] >= 'A' && result[i] <= 'Z') || (result[i] >= 'a' && result[i] <= 'z') || (result[i] >= '0' && result[i] <= '9') || (result[i] == ' '))){
                valid = false;
                break;
            }
        }
        if(valid){
            cout << "Valid String";
        }
        else{
            cout << "Invalid String";
        }
    }
};

int main() {
    StringProcessor s1;
    s1.getData();
    s1.process();
    s1.analyze();
    return 0;
}
