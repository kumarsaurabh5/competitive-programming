#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,t1,sumar=0;
        cin>>n>>t1;
        int ar[n],prear[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            sumar+=ar[i];
        }
        prear[0]=ar[0];
        for(int i=1;i<n;i++){
            prear[i]=ar[i]+prear[i-1];
        }
        // cout<<"aer"<<sumar<<endl;
        while(t1--){
            int l,r,k,d,e,f;
            
            
            cin>>l>>r>>k;
            f=(prear[r-1]-(prear[l-1]-ar[l-1]));
            // cout<<f<<endl;
            d=(r-l+1)*k;
            // cout<<"D"<<d<<endl;
            
            // cout<<f<<endl;
            e=prear[n-1]-f+d;
            // cout<<"E"<<e<<endl;
            if(e&1){
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}