#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0,flag=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            c++;
            // cout<<endl<<c<<endl;
            if(c==7){
                flag=1;
                break;
            }
        }
        else
        c=0;
    }
    c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            c++;
            // cout<<endl<<c<<endl;
            if(c==7){
                flag=1;
                break;
            }
        }
        else
        c=0;
    }
    if(flag){
        cout<<"YES";
    }
    else{ 
    cout<<"NO";}
    return 0;
}