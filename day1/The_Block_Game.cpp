//Difficulty Rating:830

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int num,x=0;
	    int mod;
	    cin>>num;
	    int n = num;
	    while(num != 0)
        {  
            mod = num%10;
            x = x * 10 + mod;  
            num = num/10;
        } 
	    if(n==x){
	        cout<<"wins"<<endl;
	    }else{
	        cout<<"loses"<<endl;
	    }
	}
	return 0;
}
