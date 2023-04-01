#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int n,br=0,tw=0,count=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
        

    }
    sort(ar,ar+n);
    int i=0,j=n-1;
    if(n==1)
    cout<<1;
    else{ 
    while(i<j){
        br=br+ar[i];
        i++;
        count++;
       
        tw=tw+ar[j];
        
        j--;
        if(tw>br){
           tw=tw+ar[n-1];
           
           j++; 
        }
    }
    cout<<count;}
    return 0;
}