/*
Given an array of distinct elements. The task is to find triplets in array whose sum is equal to a given number.
*/

#include<iostream>
#include<unordered_map>
using namespace std;

void countTrip(int *arr, int n, int s){
	unordered_map<int, int> mp1;
	for(int i=0;i<n;i++)
	mp1[arr[i]]++;
	for(int i=0;i<n-1;i++){
		int newSum = s - arr[i];
		for(int j=i+1;j<n;j++){
			if(mp1[newSum-arr[j]] != 0)
			cout<<arr[i]<<" "<<arr[j]<<" "<<newSum-arr[j]<<endl;
		}
	}
}

int main(){
	int n,s;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cin>>s;
	countTrip(arr,n,s);
	return 0;
}
