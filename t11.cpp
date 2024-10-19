#include<iostream>
using namespace std;
int add(int a,int b){
	return a+b;
}
int add(int a,int b,int c){
	return a+b+c;
	}
	int main(){
		int a,b,c;
		cout<<"enter the value:";
		cin>>a>>b>>c;
		cout<<"addtion oftwo value:"<<add(a,b)<<endl;
		cout<<"three value"<<add(a,b,c)<<endl;
	return 0;}
