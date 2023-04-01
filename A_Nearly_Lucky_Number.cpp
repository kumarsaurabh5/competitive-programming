#include<iostream>
#include<string>
using namespace std;
int main(){
    long long int n,a,c=0;
    cin>>n;
    while(n>0){ 
    a=n%10;
    // cout<<c;
    // cout<<"A"<<a<<endl;
    if (a==4 || a==7)
    {
        // cout<<"A"<<a<<endl;
        c++;
        // cout<<endl<<c<<endl;
    }
    n=n/10;}
    // cout<<c;
    if (c==4 || c==7)
    {
        cout<<"YES";
    }
    else
    cout<<"NO";
    return 0;
}