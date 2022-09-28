/*
You have been given a random integer array/list(ARR) of size N, and an integer X. You need to search for the integer X in the given array/list using 'Linear Search'.
You have been required to return the index at which X is present in the array/list. If X has multiple occurrences in the array/list, then you need to return the index at which the first occurrence of X would be encountered. In case X is not present in the array/list, then return -1.
*/

#include<iostream>
using namespace std;

int linearSearch(int *arr, int n, int x){
	for(int i=0;i<n;i++)
		if(arr[i] == x)
		return i;
	return -1;
	
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
		int x;
		cin>>x;
		cout<<linearSearch(arr,n,x)<<endl;
	}
	
	
	return 0;
}
