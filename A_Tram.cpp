#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    int ans=0,mac=0;

    while(t--){
        int a,b;
        cin>>a>>b;
        ans=ans-a+b;
        if(ans>mac){
            mac=ans;
        }
    }
    cout<<mac;
    return 0;
}