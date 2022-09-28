/*
Send Feedback
Given an array of length N, you need to find and print the sum of all elements of the array.
*/
#include<iostream>
using namespace std;

void arrSum(int *arr, int n){
	int sum=0;
	for(int i=0;i<n;i++)
	sum+= arr[i];
	cout<<sum<<endl;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	arrSum(arr,n);
	return 0;
}
