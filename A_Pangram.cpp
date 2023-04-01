#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    string s;
    cin>>s;
   
    int ar[26];
    for(int i=0;i<n;i++){
        if(s[i]<97){
            s[i]=s[i]+32;
        }
    }
    
    for(int i=0;i<n;i++){
        ar[s[i]-'a']=1;
    }
    for(int i=0;i<26;i++){
        if(ar[i]==1)
        c++;
    }
  
    if(c==26){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}