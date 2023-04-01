#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b;
    for (int i=1;i<500;i++){
        a=a*3;
        b=b*2;
        if(a>b){
            c=i;
            break;
        }
    }
    cout<<c;
    return 0;
}   