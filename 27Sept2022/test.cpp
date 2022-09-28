#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
   sort(arr.begin(),arr.end());
    vector<vector<int>> v1;
    for(int i = 0 ; i < 4; i++){
        for(int j = i+1; j < 5; j++){
            vector<int> v2;
            if(arr[i]+arr[j] == s){
                v2.push_back(arr[i]);
                v2.push_back(arr[j]);
                v1.push_back(v2);
            }
            
            if( (arr[i]+arr[j]) > s)break;
        }
    }
    /*for(int i = 0;i<v1.size();i++){
        cout<<endl;
        for(int j=0;j<v1[i].size();j++){
            cout<<v1[i][j];
        }
    }*/
    return v1;
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


