/*
You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list.
You don't need to print or return anything, just change in the input array itself.
*/

#include<iostream>
using namespace std;

void swap(int *arr, int n){
	int temp=0;
	for(int i=0;i<n-1;i+=2){
		temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		swap(arr,n);
		for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}
