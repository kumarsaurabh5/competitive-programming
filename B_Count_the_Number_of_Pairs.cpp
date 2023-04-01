#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n=0;
        cin>>a>>b;
        string s;
        cin>>s;
        int ar[26]={0},arc[26]={0};
        for(int i=0;i<s.size();i++){
           int x=s[i];
        //    cout<<x<<endl;
            if(x>96)
            ar[s[i]-'a']++;
            else
            arc[s[i]-'A']++;
        }
        // for(int i=0;i<26;i++){
        //     cout<<ar[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<26;i++){
        //     cout<<arc[i];
        // }
        // cout<<endl; 
        for(int i=0;i<26;i++){
            n+=min(ar[i],arc[i]);
            int k=abs(ar[i]-arc[i]);
            if(k>=2){
                n+=min(k/2,b);
                b-=min(k/2,b);
            }
        }
        cout<<n<<endl;
    }
    return 0;
}