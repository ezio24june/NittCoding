/*
You are given an array of 0s and 1s in random order. Segregate 0s on left side and 1s on right side of the array [Basically you have to sort the array]. Traverse array only once. 
*/

#include<iostream>
using namespace std;

int* solve0_1(int *arr, int n){
	int l0=0,r1=n-1;
	while(l0<r1){
		if(arr[l0] == 1){
			if(arr[r1] == 0)
			swap(arr[l0],arr[r1]);
			r1--;
		}
		else
		l0++;
	}
	return arr;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int *a;
	a = (solve0_1(arr,n));
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<"\n";
}
