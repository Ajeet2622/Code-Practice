#include <iostream>
#include <string>
using namespace std;

string modify (string s);

int main() {
    string result = modify("kumarji");
    cout << result << endl;
    return 0;
}

string modify (string s) {
       string res;
            for(int i=0; i<s.length(); i++){
                if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            
                    res+=s[i];
                }
        }
        for(int i = 0; i<(res.length())/2; i++){
            char temp = res[i];
            res[i] = res[res.length()-1-i];
            res[res.length()-1-i] = temp;
        }
        int con =0;
        for(int i=0; i<s.length(); i++){
                if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            
                    s[i]=res[con];
                    con++;
                }
        }
        
        return s;
}