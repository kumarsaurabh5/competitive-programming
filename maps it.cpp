#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_multimap<int,int> store;
    for(int i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        store.insert({inp,i});
    }
    int target ,c = 0;
    cin >> target;
    for(auto it : store)
    {
        int tmp = target - it.first;
        int cindex = it.second;
        if(store.count(tmp) != 0)
        {
            auto it2 = store.find(tmp); //index
            if (it2->second > cindex)   c++;                   
        }
    }
    cout << c << endl;
}