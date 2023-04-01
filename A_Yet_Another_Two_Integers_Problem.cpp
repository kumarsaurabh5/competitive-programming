#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b,t;
    cin>>t;
    while(t--){
        int n=0;
    cin>>a>>b;
    int s;
    s=abs(b-a);
    n+=s/10;
    s=s-n*10;
    if(s>0)
    n++;
    cout<<n<<endl;
    }
    return 0;
}