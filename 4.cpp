#include <iostream>
using namespace std;

int main(){
	int pri,year;
	char age;
	cout <<"enter the values:";
	cin>>pri>>year>>age;
	double interest=0.0;
	if(age=='y'){
		interest =(pri*year*0.12);
	}else{
		interest=(pri*year*0.10);
	}cout<<interest;
}




