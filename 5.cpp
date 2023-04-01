#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> store;

    store.insert(1);
    store.insert(2);
    store.insert(3);

    for(auto it : store)
    {
        cout << it <<endl;
    }
}