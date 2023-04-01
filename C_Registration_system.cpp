#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
   map<string , int> ma;
   for(int i=0;i<t;i++){
    cin>>s;
    if(ma.count(s)==0){
        cout<<"OK"<<endl;
        
        ma[s]++;
        cout
    }
    else{
        cout<<s<<ma[s]<<endl;
        ma[s]++;
    }
   }
    
    return 0;
}