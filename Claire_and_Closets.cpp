#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,s;

    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++){

        cin>>arr[i];
    }
    int m;
     sort(arr,arr+n);
    for(int j=0;j<s;j++){
        cin>>m;
        int count=0;
       
        for(int i=0;i<n;i++){ 
            cout<<"m"<<m;
            cout<<"arr[2 "<<i<<arr[i]<<endl;   
        if(m%2!=0){
            cout<<"-1"<<endl;
            break;
        }
        if(arr[i]==m){
           
            cout<<"1"<<endl;
            break;
        }
    
    
    else{
        int i=0;

        
        while(m>=arr[(n-1)-i]){
            count++;
            i++;}
    cout<< count<<endl;
      
    }
        }
    }
    
    return 0;
}