#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   long long  int n;
	    cin>>n;
	    long long int a[n],b[n];
	    long long int i;
	    for( i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	     for( i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    
	   long long  int prezero=0,preone=0,postzero=0,postone=0;
	    if(a[0]==1)
	    {
	        preone++;
	    }
	    else
	    {
	        prezero++;
	    }
	    for( i=2;i<n;i++)
	    {
	        if(a[i]==0)
	        {
	            postzero++;
	        }
	        else
	        {
	            postone++;
	        }
	    }
	    if((a[0]!=b[0])||(a[n-1]!=b[n-1]))
	    {
	        cout<<"NO";
	    }
	    else
	    {  int flag=1;
	        if(b[1]==1)
	        {
	            if(a[1]==1)
	            {
	                preone++;
	            }
	            else 
	            {if(preone>0||postone>0)
	             {  preone++;}
	            else
	            {
	                cout<<"NO";
	                flag=0;
	            }
	            }
	        }
	        
	             if(b[1]==0)
	        {
	            if(a[1]==0)
	            {
	                prezero++;
	            }
	            else 
	            { cout<<"NO";
	               flag=0;
	            }
	        }
	        
	        for(i=2;i<n-1;i++)
	        {
	            if(b[i]==1)
	            {
	                if(a[i]==1)
	                {   postone--;
	                    preone++;
	                    continue;
	                }
	                else
	                {
	                    if(preone>0||postone>0)
	                    {   postzero--;
	                        preone++;
	                        continue;
	                    }
	                    else
	                    {
	                        cout<<"NO";
	                         flag=0;
	                        break;
	                    }
	                }
	            }
	            
	            
	            
	            
	           else 
	            {
	                if(a[i]==0)
	                {   postzero--;
	                    prezero++;
	                    continue;
	                }
	                else
	                {
	                    cout<<"NO";
	                     flag=0;
	                    break;
	                   
	                }
	            }
	            
	      
	        }
	        
	
	            
	        
	        if( flag==1)
	        {
	            cout<<"YES";
	        }
	    }
	    
	    cout<<endl;
	    
	    
	
	}
	return 0;}