#include <iostream>
#include<bits/stdc++.h>
#include<string>
#include<map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	     unordered_map<char,int> ma;
	    for(int i=0;i<n;i++){
        
	        // if(ma.count(s[i])>=3)
	        // ma[s[i]]-=2;
	        ma[s[i]]++;
            
	    }
        for(auto& it: ma){
            if(it.second>=3){
                it.second-=2;
                it-=1;
                continue;
            }
        cout<<it.first<<it.second<<endl;

       }
        for(auto& it: ma){
            if(it.second==2){
               cout<<it.first;
            }
        cout<<it.first;

       }
	    // for(int i=0;i<n;i++){
	    //     if(ma[s[i]]==2)
	        
	    //     else
	    //     cout<<s[i];
	    // }
	    cout<<endl;
	}
	return 0;
}
