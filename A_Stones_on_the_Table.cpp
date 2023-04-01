#include<iostream>
#include<string>
using namespace std;
int main(){
    int t,count=0;
    string s;
    cin>>t;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}