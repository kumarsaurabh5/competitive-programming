#include <bits/stdc++.h>
using namespace std; int main()
 
{ int n; cin>>n; int even=0,odd=0,noeven=0;for(int i =0;i<n;i++){int a; cin>>a;if(a%2 !=0){odd=i+1;noeven--;}else{even=i+1;noeven++;}}
if(noeven > 0)cout<<odd; else cout<<even;
}