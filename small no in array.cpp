#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == mid){
		left = mid + 1;
		}
        else {
		right = mid - 1;
		}
    }

    cout << "The smallest missing element is: " << left << endl;
    return 0;
}



#include<iostream>
using namespace std;
int main(){
	int n,arr[n];
	cout << "enter the number of elements in the array:";
	cin >> n;
	cout<<"enter the sorted array values:";
	for(int i=0;i<=n;i++){
		cin >> arr[i];
	}
	int j=0;
	while(j<n){
		if(arr[j]!=j){
			cout<<"the smallest missing element is found : "<< j;
			return 0;
		}
			j++;
	}
	cout<<"the smallest missing element is not found ";
}

