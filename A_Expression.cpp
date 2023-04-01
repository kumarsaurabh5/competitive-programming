#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==1&&b==1 || a==1 && c==1 ||c==1&&b==1)
    cout<<a+b+c;
    else if(a==b && b==c)
    cout<<a*b*c;
    else if(b>a&&b>c)
    cout<<a*b*c;
    else if(c>b && c>a && (a!=1 || b!=1))
cout<<(a+b)*c;
    }
    
    else if(a>b && a>c && (b!=1 || c!=1))
    cout<<a*(b+c);
    else
    cout<<a+b+c;
    return 0;
}