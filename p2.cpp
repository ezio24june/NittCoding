/*
You are given an array of integers 'ARR' containing N elements. Each integer is in the range [1, N-1], with exactly one element repeated in the array.

Your task is to find the duplicate element. The duplicate element may be repeated more than twice in the error, but there will be exactly one element that is repeated in the array.
*/

#include<iostream>
#include<unordered_map>
using namespace std;

int findUnique(int *arr, int n){
	int duplicate[n];
	for(int i=1;i<n;i++)
	duplicate[i] = 0;
	for(int i=0;i<n;i++){
		if(duplicate[arr[i]]== 0)
		duplicate[arr[i]]++;
		else
		return arr[i];
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findUnique(a,n)<<endl;
	}	
	return 0;
}
