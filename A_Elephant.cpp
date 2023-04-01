#include<iostream>
#include<string>
using namespace std;
int main(){
    int t,count=0,x;
    cin>>t;
    while(t>0){ 
        if(t>=5){ 
        count++;
        t=t-5;}
        else{
            count=count+1;
            break;
        }

    }
    cout<<count;

    return 0;
}