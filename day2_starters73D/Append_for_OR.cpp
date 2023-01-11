//Append for OR

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,k,sum=0,x=0,flag=0;
	    int arr[100000];
	    cin>>a>>k;
	    for(int i=0;i<a;i++){
	        cin>>arr[i];
	        sum=sum|arr[i];
	    }
	    for (x=0;x<k+1;x++){
	        if(sum==0 && k==1){
	            cout<<1<<endl;
	            flag=1;
                break;
	        }else if(sum==k){
	            cout<<0<<endl;
	            flag=1;
	            break;
	        }else if((sum|x)==k){
	            cout<<x<<endl;
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0){
	        cout<<-1<<endl;
	    }
	    
	}
	return 0;
}
