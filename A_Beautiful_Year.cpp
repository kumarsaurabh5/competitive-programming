#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    for(int i=n+1;i<9012;i++){
        string s;
        s=to_string(i);
     
        set <int> se;
        for(int j=0;j<s.size();j++)
        se.insert(s[j]);
        // cout<<"i si "<<i<<" "<<se.size()<<endl;
        if(se.size()==4){
            a=i;
            break;
        }
        
    }
    cout<<a;
    return 0;
}