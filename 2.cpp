#include <iostream>
using namespace std;

int main() {
	string user1,user2;
	cout <<"enter the username:";
	cin>>user1>>user2;
	if(user1==user2){
		cout<<"valid";
	}else{
		cout <<"invalid";
	}return 0;
}
