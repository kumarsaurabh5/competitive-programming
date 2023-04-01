#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,start=0,end,s,mid,c=0;
    cout<<"enter N:";
    cin>>n;
    cout<<"enter the array";
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    end=n;
    cout<<"enter the element to be searched";
    cin>>s;
    sort(ar,ar+n);
    for(int mid=(start+end)/2; abs(start - end) > 0; mid = (start+end)/2)
    {
        if(ar[mid] > s)
            end = mid-1;
        else if(ar[mid] < s)
            start = mid+1;
        else
        {
            cout << "Element found at " << mid << endl;
            c++;
            break;
        }
    }
    if(c==0)
    cout<<"element not found";
    return 0;
}