/* 
You have been given two integer arrays / list ( ARR1 and ARR2 ) of size N and M , respectively . You need
to print their intersection ; An intersection for this problem can be defined when both the arrays / lists
contain a particular value or to put it in other words , when there is a common value that exists in
both the arrays / lists .
*/

#include<iostream>
#include<unordered_map>
#include<cstdlib>

using namespace std;

void intersection(int *a, int *b, int n, int m){
	unordered_map<int, int> mp1;
	for(int i=0;i<n;i++)
	mp1[a[i]]++;
	for(int i=0;i<m;i++)
	mp1[b[i]]++;
	for(int i=0;i<n;i++){
		if(mp1[a[i]]/2 > 0)
		cout<<a[i]<<" ";
		mp1[a[i]]/=2;
	}
	cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		
		cin>>n;
		int arr1[n];
		for(int i=0;i<n;i++)
		cin>>arr1[i];
		
		cin>>m;
		int arr2[m];
		for(int i=0;i<m;i++)
		cin>>arr2[i];
		
		intersection(arr1, arr2, n, m);
	}
	return 0;
}
