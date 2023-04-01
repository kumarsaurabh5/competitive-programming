#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string d,s;
        int c=0;
        s="3141592653589793238462643383279";
        cin>>d;
        for(int i=0;i<d.size();i++){
            if(s[i]==d[i]){
                c++;
            }
            else
            break;
        }
        cout<<c<<endl;
    }
    return 0;
}