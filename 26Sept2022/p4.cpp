/*
You are given an integer array ' ARR ' of size ' N ' and an integer ' S ' . Your task is to return the list of all
pairs of elements such that each sum of elements of each pair equals ' S ' .
*/

#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
	unordered_map<int, int> m1;
	vector<vector<int>> pairList;
	for(int i=0;i<arr.size();i++){
		m1[arr[i]]++;
	}
	for(int i=0;i<arr.size();i++){
		if(s-arr[i] >= arr[i]){
			if(m1[s-arr[i]] != 0){
				for(int j=0;j<m1[s-arr[i]];j++){
					vector<int > pair;
					//cout<<"pair "<<arr[i]<<m1[(s-arr[i])]<<endl;
					pair.push_back(arr[i]);
					pair.push_back(s-arr[i]);
					pairList.push_back(pair);
				}
				//m1[arr[i]]--;
			}
		}
	}
	return pairList;
}
int main(){
	int n,s;
	cin>>n>>s;
	vector<int > arr;
	
	int item;
	for(int i=0;i<n;i++){
		cin>>item;
		arr.push_back(item);
	}
	
	vector< vector<int >> pair = pairSum(arr, s);
	for(int i=0;i<pair.size();i++){
		for(int j=0;j<pair[i].size();j++){
			cout<<pair[i][j]<<" ";			
		}
		cout<<endl;
	}
	
	return 0;
}
