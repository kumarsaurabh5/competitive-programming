#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,a,b,c,sum1=0,sum2=0,sum3=0;
    cin>>n;
    int ar1[3],ar2[3],ar3[3];
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        sum1+=a;
        sum2+=b;
        sum3+=c;
    }
    if(sum1==sum2 && sum2==sum3 && sum1==0){
        cout<<"YES";
    }
    else
    cout<<"NO";
    return 0;
}