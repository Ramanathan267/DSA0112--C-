#include<iostream>
using namespace std;
int main ()
{  
    int num, count = 0;
    cout << "Enter the number to be checked : ";
    cin >> num;
    for(int i=2; i < num; i++){
    if (num % i == 0)
    count++;
           }
if (count > 1)
 	cout  << " is not prime.";
else
    cout << " is prime.";
    return 0;
}
