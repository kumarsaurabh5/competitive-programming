#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a,sum=0;
        for(int i=0;i<s.size();i=i+2){
a=s[i]-48;
// cout<<a<<endl;
sum+=a;
        }
        cout<<sum<<endl;
    }
    return 0;
}