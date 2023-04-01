#include<iostream>
#include<string>
using namespace std;
int main(){
    int t,n,min=1000000,max=0,a,mini=1,maxi=1;
    cin>>t;
    n=t;
    int i=0;
    while(n--){
        i++;
        cin>>a;
        if(a<=min){ 
        min=a;
        mini=i;
        }
        if(a>max){ 
        max=a;
        maxi=i;}

    }
  
   if(maxi>mini)
    max=(maxi-1+t-mini-1);
    else
    max=(maxi-1+t-mini);
    cout<<max;
    return 0;
}