#include<iostream>
using namespace std;
int main(){
	int n;
	cout <<"enter n value:";
	cin>>n;
	double sum=0.0;
	double num[n];
	for (int i=0;i<n;i++){
		cin>>num[i];
		sum+=num[i];
		
	}double avg =sum /n;
	cout<<"avg of n number is:"<<avg<<endl;
}
