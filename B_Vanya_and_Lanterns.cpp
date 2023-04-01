#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    long double a;
    long long int n,fs=0,ls=0;
    
    cin>>n>>a;
    long double ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    sort(ar,ar+n);
    long double max1=ar[0];
    if(ar[0]==0)
    fs=1;
    if(ar[n-1]==a)
    ls=1;
    for(int i=0;i<n-1;i++){
        if(ar[i+1]-ar[i]>max1){
            max1=ar[i+1]-ar[i];
        }
    }
    long double ans=max1/2.00000000000;
    // cout<<"lafs"<<ls<<" "<<fs<<endl;
    if(ls == 0 && fs == 0){
        ans=max(max(ar[0],a-ar[n-1]),ans);
    }
    else if(ls == 0){
        // cout<<"hello";
        // cout<<ar[n-1]-ar[n-2];
        ans=max(a-ar[n-1],ans);
    }
    else if(fs == 0){
        
        ans=max(ar[0],ans);
    }
    cout.precision(20);
    cout<<ans;
    
    return 0;
}