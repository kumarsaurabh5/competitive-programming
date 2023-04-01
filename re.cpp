#include<bits/stdc++.h>
//#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_multimap<int,int> st;
    cout<<"hello1";
    for(int i=0;i<n;i++){
        int inp;
        cin>>inp;
        st.insert({inp,i});
        cout<<"hello";
    }
    //cout<<"hello2";
    //for(auto it:st)
    //{
    //    cout<<it;
    //}
    //return 0;
}