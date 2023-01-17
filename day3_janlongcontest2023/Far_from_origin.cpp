#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x1,x2,y1,y2,x=0,y=0;
	    cin>>x1>>y1>>x2>>y2;
	    
if((pow((x1-x),2)+pow((y1-y),2))>(pow((x2-x),2)+pow((y2-y),2))){
	        cout<<"ALEX"<<endl;
	    }else 
if((pow((x1-x),2)+pow((y1-y),2))<(pow((x2-x),2)+pow((y2-y),2))){
	        cout<<"BOB"<<endl;
	    }else{
	        cout<<"EQUAL"<<endl;
	    }
	}
	return 0;
}
