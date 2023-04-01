#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int x,y,n,ans=0;
        cin>>x>>y>>n;
        for(long long int i=0;i<n;i++){
            cout<<"hello";
            if(y%x==i)
            ans=i;
        }
        cout<<ans<<endl;
    }
    return 0;
}