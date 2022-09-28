/*
Arrange Numbers in Array
Send Feedback
You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and you need not worry about the array.
Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,5,.......,6,4,2.
*/

#include<iostream>
using namespace std;

void arrangeArray(int n){
	int arr[n];
	int l=1;
	for(int i=0;i<n/2;i++){
		arr[i] = l++;
		arr[n-1-i] = l++;
	}
	if(n&1 == 1)
	arr[n/2] = l;
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		arrangeArray(n);
	}
	return 0;
}
