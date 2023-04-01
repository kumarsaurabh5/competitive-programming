#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,r,d,x;
        cin>>n>>s>>r;
        d=s-r;
        if(n==s){
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else{ 
        cout<<d;
        cout<<" ";
        for(int i=1;i<n-1;i++){
           
            x=r/(n-2);
           cout<<x<<" ";
           r-=x;
            

        }
        cout<<r;
        cout<<endl;
    }}
    return 0;
}