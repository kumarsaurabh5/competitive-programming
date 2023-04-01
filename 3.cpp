#include<iostream>
using namespace std;
int main(){
    int x=12;
    int &y=x;
cout<<y<< endl;
cout<<x<< endl;
y=5;
cout<<y<< endl;
cout<<x<< endl;
x=1;
cout<<y<< endl;
cout<<x<< endl;
    int a,b,c;
    //cout<<a<<b<<c;
    a=23;
    int* p;
   * p=a;
cout<<a; 
//cout<<a;
cout<<endl<<*p;
cout<<endl<<p<<"see";

    cout<<p;
    cout<<endl<<*p<<endl;
    return 0;
    }