
//Lucky Numbers

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int temp=0,mod=0,i=0,arr[20],sum=0;
	    while(x!=0){
	        temp=x;
	        arr[i]=x%10;
	        x=x/10;
	        if(arr[i]==7){
	            sum=1;
	        }
	        i=i+1;
	        
	    }
	    if(sum==1){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}

