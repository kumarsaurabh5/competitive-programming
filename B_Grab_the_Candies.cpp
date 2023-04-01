#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, inp, sume = 0, sumo = 0, odd = 0, even = 0, flag = 0;
        cin >> a;
        int ar[a];
        

        for (int i = 0; i < a; i++)
        {
            cin >> inp;

           

            ar[i] = inp;
            if (inp % 2)
                odd+=inp;
            else
                even+=inp;
        }
        
        if (even>odd)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
      
    }
    return 0;
}