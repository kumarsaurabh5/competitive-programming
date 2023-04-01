#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,un=0,kn=0,n=0;
        cin>>a;
        int ar[a];
        for(int i=0;i<a;i++){
            cin>>ar[i];
            if(ar[i]==1){
                un++;
            }
            else{
                kn=kn+un;
                un=0;
            }
            n=max(n,un+(kn ? kn/2+1 : 0));
        }
        cout<<n<<endl;
        }
    return 0;
}