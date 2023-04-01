#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,odd=0,even=0;
        cin>>a;
        int ar[a];
       for(int i=0; i<a; i++){
        cin>>ar[i];
            if(i%2 != ar[i] % 2){
                if(ar[i] % 2 == 1)odd++;
                else even++;
            }
        }
        if(odd != even){
            cout<<-1<<endl;
        }
        else{
            cout<<even<<endl;
        }
    }
    return 0;
}