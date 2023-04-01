#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){ 
    string s1,s2;
    int sumb=0,sumr=0;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++){
        if(s1[i]=='B')
        sumb++;
        else
        sumr++;
    }
    for(int i=0;i<s2.size();i++){
        if(s2[i]=='B')
        sumb+=1;
        else
        sumr+=1;
    }
    if((s1[s1.size()-1]==s1[s1.size()-2] && s2[s2.size()-1]==s1[s1.size()-2] )||(s2[s2.size()-1]==s2[s2.size()-2] && s1[s1.size()-1]==s2[s2.size()-2]) ){ 
    cout<<"NO";
    break;
    }
    if(abs(sumr-sumb)>2)
    cout<<"NO";
    else
    cout<<"YES";}
    
    return 0;
}