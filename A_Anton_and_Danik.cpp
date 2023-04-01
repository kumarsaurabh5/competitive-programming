#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,an=0,dn=0; 
    cin>>n; 
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            an++;
        }
        else
        dn++; }
        if(an>dn)
        cout<<"Anton";
        else if ( dn>an)
        cout<<"Danik";
        else
        cout<<"Friendship";
}