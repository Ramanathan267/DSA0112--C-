#include<bits/stdc++.h>
using namespace std;

int main() {
     int bin,dec=0,rem;
     bin =111;
     for (int i =0;bin !=0;i++){
     	rem =bin%10;
     	bin= bin/10;
     	dec=dec+rem*(pow(2,i));
     	
	}cout<<dec<<endl;
	return 0;
}
