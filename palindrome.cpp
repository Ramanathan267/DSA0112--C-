#include<iostream>

using namespace std;
int main (){
	int n,rev=0;
	
	cout<<"enter the number:";
	cin>> n;
	int temp=n;
	while(n!=0){
		int rem=n%10;
	      rev = rev*10+rem;
		n= n/10;
		}
	
		if (rev==temp)
			cout<<"palindrome";
		else
			cout<<"not a palindrome";
		
	return 0;
}
