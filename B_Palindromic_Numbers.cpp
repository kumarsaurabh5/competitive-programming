#include <iostream>
#include<cstring>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        string s;
        cin >> s;
        if (s[0] == '9')
        {
            // for (int i = 0; i < n + 1; i++)
            // {
            //     t += '1';
            // }
            char t[n+1];
            memset(t,'a',sizeof(t));
        }
        else
        {
            // for (int i = 0; i < n; i++)
            // {
            //     t += '9';
            // }
              char t[n];
            memset(t,'a',sizeof(t));
            for (int i = 0; i < n; i++)
            {
                cout<<t[i]<<endl;
            }
        }
        
        
        // cout << abs(stoi(t) - stoi(s))<<endl;
    }
    return 0;
}