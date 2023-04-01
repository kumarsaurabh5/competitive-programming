#include<iostream>
#include <algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    char ar[]={'A','E','I','O','U','Y','a','e','y','i','o','u'};
        for(int i=0;i<12;i++){ 
        s.erase(   remove(s.begin(), s.end(), ar[i]) ,    s.end()   );
    }
        for(int i=0;i<s.size();i++){ 
        if(s[i]<97){
            s[i]=s[i]+32;
        }
    }
        for(int i=0;i<s.size();i=i+2){ 
        s.insert(i,".");
    }

    cout<<s;
    return 0;
}