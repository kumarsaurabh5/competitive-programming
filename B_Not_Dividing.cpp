#include<iostream>
#include<string>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<n;i++){
        if(ar[i]==1)ar[i]++;
    }
    for(int i=1;i<n;i++){
       
        if(ar[i]%ar[i-1] == 0){
            // cout<<ar[i]<<endl;
      ar[i]++;     
    }}
    for(int i=0;i<n;i++)cout<<ar[i]<<" ";
    cout<<endl;
    return;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}