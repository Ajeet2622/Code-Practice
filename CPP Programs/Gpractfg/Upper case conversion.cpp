#include<iostream>
using namespace std;
string transform(string s);
int main(){
	string s = "i love you";
	string p = transform(s);
	cout<<p;
	return 0;
}

string transform(string s)
{
	// char pre;
	// char at;
	// char aft;
   for(int i=0;i<s.length()-2;i++){
	// pre[1]=s[i-1];
	// at[1] = s[i];
	// aft[1] = s[i+1];

	//if(pre==' '&& aft = ' '){
	int j = 0;
	if(j==i){
// 	if((s[i] != ' ' && s[i-1] == ' ') ||(s[i] != ' ' && s[i+1]!=' ')){
		s[i] = toupper(s[i]);
	 }else if(s[i]!=' ' && s[i-1]==' '){
	     s[i] = toupper(s[i]);
	 }
   }
   return s;
}