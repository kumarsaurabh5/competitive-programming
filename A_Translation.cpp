#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,t="",u;
    cin>>s>>u;

    for(int i=s.size()-1;i>=0;i--){
        t=t+s[i];
    }

    if(t==u)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}