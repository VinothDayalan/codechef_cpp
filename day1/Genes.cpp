//Difficulty Rating:826

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char a,b;
	cin>>a>>b;
	if(a=='R' && b=='B' ||a=='R' && b=='G'){
	    cout<<"R"<<endl;
	}else if(a==b){
	    cout<<a<<endl;
	}else if(a=='G' && b=='B'){
	    cout<<"B"<<endl;
	}
	return 0;
}

