#include<map>
 #include<iostream>
 #include<string>
 using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        string s;
        cin>>s;
        map<char,int> m;
        int flag=0;
        for(int i=0;i<a;i++){
            
            m[s[i]]++;
            
            
            if(m[s[i]]>1){
                int d=(i-s.find(s[i]));
                // cout<<d<<endl;
                if(d%2){
                    flag=1;
                    break;
                }
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;

    }

    return 0;
 }