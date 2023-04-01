#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,t;
    cin>>a>>t;
    string s;
    cin>>s;while(t--){ 
    for(int i=0;i<a-1;i++){
        if(s[i]=='B'&&s[i+1]=='G'){
            s[i]='G';
            s[i+1]='B';
            i++;
        }
    }}
    cout<<s;
    return 0;
}