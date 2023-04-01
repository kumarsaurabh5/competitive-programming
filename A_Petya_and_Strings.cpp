#include<iostream>
#include<string>
using namespace std;
int main(){
    int n=0,b=0,c=0 ;
    string s,a;
    cin>>s>>a;
    for(int i=0;i<s.size();i++){
       if(s[i]<92){
          s[i]=s[i]+32;
       }       
       if(a[i]<92){
        
        a[i]=a[i]+32;
        
       }
    }
   
    if(s<a){
        cout<<-1;
    }
    else if(s>a){
        cout<<1;
    }
    else if(s==a){
        cout<<0;
    }
    return 0;
}