#include<iostream>
#include<string>
using namespace std;
int main(){
    int flag=0,up=0;
    string
     s;
     cin>>s;
     for(int i=0;i<s.size();i++){
        // cout<<s[i];
        int t;
        t=s[i];
        
       
        
        if(t<97)
        {
            if(s[0]<97)
            flag=1;
            up++;
        }
    
     }
    //  cout<<"UP"<<up<<flag<<endl;
     if((flag==0 && up != s.size()-1)||(flag==1 && up !=s.size()));
     else {
        for(int i=0;i<s.size();i++){
            if(s[i]<97)
            s[i]+=32;
            else
            s[i]-=32;
        }
     }
     cout<<s;
    return 0;
}