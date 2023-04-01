#include<iostream>
#include<string>
using namespace std;
int main(){
    int m,c,flag;
    cin>>m;
    int n=m;
    while(m>0){
        
        c=m%10;
        if(c==4 || c==7){
            m=m/10;
            flag=1;
        }
        else{ 
            flag=0;
        break;}
    }
    if(flag)
    cout<<"YES";
    
        
            else if(n%4==0 || n%7==0){
                n=n/4;
                cout<<"YES";
            }
           
            
            
       
        else
        cout<<"NO";
    

    return 0;
}