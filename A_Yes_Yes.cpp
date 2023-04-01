#include<iostream>
#include<string>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    while(t--)
    {
        int a,b;
        string s;
        cin>>s;
        int ar[3]={'Y','e','s'};
        for(int i=0;i<s.size();i++){ 
            
            if(s[i]==ar[0] || s[i]==ar[1] || s[i]==ar[2]){
                c++;}}
                if(c==s.size()){  
            if(s[0]==ar[0]){
                if((s.size()-1)%3==0){
                    if(s[0]==s[s.size()-1]){
                        cout<<"YES"<<endl;
                    }
                    else
                    cout<<"NO"<<endl;
                }
                else if((s.size()-1)%3==1)
                {  if(s[s.size()-1]==ar[1]){
                        cout<<"YES"<<endl;
                    }
                    else
                    cout<<"NO"<<endl;
                }
                else if((s.size()-1)%3==2)
                {  if(s[s.size()-1]==ar[2]){
                        cout<<"YES"<<endl;
                    }
                    else
                    cout<<"NO"<<endl;
                }
            }
            else if(s[0]==ar[1]){
                if((s.size()-1)%3==0){
                    if(s[0]==s[s.size()-1]){
                        cout<<"YES"<<endl;
                    }
                    else
                    cout<<"NO"<<endl;
                }
                else if((s.size()-1)%3==1)
                {  if(s[s.size()-1]==ar[2]){
                        cout<<"YES"<<endl;
                    }
                    else
                    cout<<"NO"<<endl;
                }
                else if((s.size()-1)%3==2)
                {  if(s[s.size()-1]==ar[0]){
                        cout<<"YES"<<endl;
                    }
                    else
                    cout<<"NO"<<endl;
                }
            }
            else if(s[0]==ar[2]){
                if((s.size()-1)%3==0){
                    if(s[0]==s[s.size()-1]){
                        cout<<"YES"<<endl;
                    }
                    else
                    cout<<"NO"<<endl;
                }
                else if((s.size()-1)%3==1)
                {  if(s[s.size()-1]==ar[0]){
                        cout<<"YES"<<endl;
                    }
                    else
                    cout<<"NO"<<endl;
                }
                else if((s.size()-1)%3==2)
                {  if(s[s.size()-1]==ar[1]){
                        cout<<"YES"<<endl;
                    }
                    else
                    cout<<"NO"<<endl;
                }
            }
            
        } 
        
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}