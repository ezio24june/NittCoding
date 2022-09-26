/*You have been given an integer array / list ( ARR ) of size N. Where N is equal to [ 2M + 1 ] .
Now , in the given array / list , ' M ' numbers are present twice and one number is present only on
You need to find and return that number which is unique in the array / list .*/

#include<iostream>
#include<unordered_map>
using namespace std;

int findUnique(int *arr, int n){
	unordered_map<int , int> uni;
	for(int i=0;i<n;i++)
		uni[arr[i]]++;
	for(auto x : uni)
		if(x.second == 1)
			return x.first;
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
