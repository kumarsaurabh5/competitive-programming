#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,max=0,maxcur=0;
	    cin>>n;
	    int arg[n];
	    int arb[n];
	    for(int i=0;i<n;i++){
	        cin>>arb[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>arg[i];
	    }
	    for(int i=0;i<n;i++){
	        if(arg[i]==0||arb[i]==0)
	        {
	            if(maxcur>max)
	            max=maxcur;
	            maxcur=0;
	        }
	        else
	        maxcur++;
            if(maxcur>max)
	            max=maxcur;
	    }
	    cout<<max<<endl;
	}
	return 0;
}
