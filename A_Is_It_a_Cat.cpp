#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        string s,d;
        cin>>s;
        for(int i=0;i<a;i++){
            if(s[i]<97){
                s[i]+=32;
            }
        }
        // cout<<"s"<<s<<endl;
        d=s[0];
        for(int i=1;i<a;i++){
            if(s[i]==s[i-1]);
            else
            d+=s[i];
        }
        // cout<<d<<endl;
        string x="meow";
        if(d==x){
            cout<<"YES"<<endl;

        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}