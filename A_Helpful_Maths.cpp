#include<iostream>
#include <map>
#include<string>
using namespace std;
int main(){
    string s,y="";
    cin>>s;
    int a=s.size(),j=0;
    map<char,int> m;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+'){
            m[s[i]]++;
        }

    }
    int c=1;
    for(auto x:m){
        while(x.second){
            j++;
           cout <<x.first;
           if(j<a){
            cout<<'+';
            j++;
           }
           x.second--;
        }
        // for(int i=1;i<s.size();i=i+2){
        //     y.insert(i,"+");
        // }


    }
   
    cout<<y;

    return 0;
}