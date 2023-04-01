#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int l=0,u=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]<97)
        u++;
        else
        l++;
    }
    if(u>l){
        for(int i=0;i<s.size();i++){
            if(s[i]>96)
            s[i]-=32;
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            if(s[i]<97)
            s[i]+=32;
        }
    }
    cout<<s;
    return 0;
}