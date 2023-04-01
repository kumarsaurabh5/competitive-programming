#include<iostream>
#include<algorithm>
#include<set>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        set<int>se;
        cin>>s;
        int ar[4];
        for(int i=0;i<4;i++){
            ar[i]=s[i]-48;
            se.insert(ar[i]);
        }
        sort(ar,ar+4);
        if(((ar[0]==ar[1])&&(ar[1]==ar[2])&& (ar[2]!=ar[3]))||((ar[1]==ar[2])&&(ar[2]==ar[3])&&(ar[0]!=ar[1]))){
            cout<<6<<endl;
        }
        
        
        else if(se.size()==1){
            cout<<-1<<endl;
        }
        else{
            cout<<4<<endl;
        }

    }
    return 0;
}