#include<bits/stdc++.h>

using namespace std;
int c = 0;
int target = 0;

void util(int arr[], int n, int i = 0, int sum = 0){
    if(i >= n) return;

    if(sum == target) {c++; return;}
    else if(sum > target)   return;

    util(arr,n,i+1,sum+arr[i]); // 1 2
    util(arr,n,i+1,sum); // 
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)  cin >> arr[i];
    cin >> target;
    util(arr,n,0,0);
    cout << c << endl;
    return 0;
}