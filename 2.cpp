#include<iostream>
#include<list>
#include<vector>
using namespace std;
/*void display(vector<int> &v)
{
    int i;
    vector<int> :: iterator iter=v.begin();
    cout<<"the vector is:";
    for ( iter; iter <v.end(); iter++)
    {
        cout<<*iter<<" ";
    }cout<<endl;
    
}*/
void display(list<int> &l)
{
    int i;
    list<int> :: iterator ite=l.begin();
     cout<<"the required list is :" ;
    for ( ite; ite!=l.end(); ite++)

    {
       
        cout<<*ite<<" ";
    }
    
}


/*int main(){
    vector<int> vector1;
    int a;
    cout<<"enter the number of datas to be entered "<<endl;
    cin>>a;
    vector1.push_back(10);
    vector1.push_back(197);
    vector1.push_back(17);
    vector1.push_back(60);
    list<int> list_1;
    list_1.push_back(12);
    list_1.push_back(17);
    list_1.push_back(16);
    list_1.push_back(11);


    //display(vector1);
    display(list_1);
    
    return 0;
}*/