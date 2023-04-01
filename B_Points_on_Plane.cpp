#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n==1){
            cout<<0<<endl;
        }
        else{ 
        long long int a;
        a=sqrt(n);
        if(a*a == n){
            cout<<a-1<<endl;
        }
        else{ 
        cout<<a<<endl;
    }}}
    return 0;
}